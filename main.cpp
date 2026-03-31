class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();

        int l = 0;         
        int write = 0;          

        for (int r = 0; r < n; r++) {
            if (r == n - 1 || chars[r] != chars[r+1]) {
                int freq = r - l +1;
                chars[write++] = chars[l];
                if (freq > 1) {
                    string count = to_string(freq);
                    for (char c : count) {
                        chars[write++] = c;
                    }
                }
                l = r+1;
            }
        }
        return write;  
    }
};