class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.size();
        int ans = 0;
        int l = 0;
        int curr_grp = 1;
        int prev_grp = 0;
        for(int r = 1; r < n; r++){
            if(s[r]==s[r+1]){
                curr_grp++;
            }
            else{
                ans += min(curr_grp,prev_grp);
                prev_grp = curr_grp;
                curr_grp = 1;
            }
        }
        ans += min(prev_grp, curr_grp);
        return ans;
    }
};