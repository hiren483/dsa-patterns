class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        map<char,int> mp;
        for(int i = 0;i<n;i++){
            mp[s[i]]++;
        }
        vector<int> ans;
        vector<int> last(26,0);
        int end = 0;
        int start=0;
        for(int i = 0 ; i<n ; i++){
            last[s[i]-'a']=i;
        }
        for(int i=0;i<n;i++){
            end = max(end, last[s[i]-'a']);
            if(i==end){
                    ans.push_back(i+1-start);
                    start = i+1;
            }
        }
        return ans;
    }
};