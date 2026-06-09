class Solution {
public:
    void backtrack(vector<int>& nums,vector<vector<int>>& allcombinations,vector<int>& curr,vector<bool>& used,int n){
        if(curr.size()==nums.size()){
            allcombinations.push_back(curr);
            return;
        }
        if(curr.size()>nums.size()){
            return;
        }
        for(int i = 0; i <n;i++){
            if(used[i]){
                continue;
            }
            if(i>0 &&!used[i-1] && (nums[i]==nums[i-1])){
                continue;
            }
            used[i]=true;
            curr.push_back(nums[i]);
            backtrack(nums,allcombinations,curr,used,n);
            curr.pop_back();
            used[i]=false;
            
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> allcombinations;
        vector<int> curr;
        vector<bool> used(n,false);
        backtrack(nums,allcombinations,curr,used,n);
        return allcombinations;
    }
};