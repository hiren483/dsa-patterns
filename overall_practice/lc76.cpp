class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size();
        int n = t.size();

        if(n > m) return "";

        vector<int> freq(128, 0);

        // store freq of t
        for(char c : t) {
            freq[c]++;
        }

        int left = 0, right = 0;
        int required = n;

        int minLen = INT_MAX;
        int start = 0;

        while(right < m) {
            // include current char
            if(freq[s[right]] > 0) {
                required--;
            }
            freq[s[right]]--;

            // when window is valid
            while(required == 0) {
                // update answer
                if(right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                // remove left char
                freq[s[left]]++;
                if(freq[s[left]] > 0) {
                    required++;
                }
                left++;
            }

            right++;
        }

        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};