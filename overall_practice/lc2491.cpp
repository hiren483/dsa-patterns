class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        sort(skill.begin() , skill.end());
        int l = 0;
        int r = n-1;
        long long chemistry = 0;
        int target = skill[0]+skill[n-1];
        while(l<r){
            if(skill[l]+skill[r]==target){
                chemistry+= skill[l]*skill[r];
                l++;
                r--;
            }
            else{
                return -1;
            }
        }
        return chemistry;
    }
};