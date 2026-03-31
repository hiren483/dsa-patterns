void getallsubsets(vector<int>& nums,
                   vector<int>& ans,
                   int i,
                   vector<vector<int>>& allsubsets) {

        allcombinations.push_back(curr);

        for(int i = start ; i< nums.size();i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            curr.push_back(nums[i]);
            backtrack(nums, ans, i+1, allsubsets);
            curr.pop_back();
        }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    vector<vector<int>> allsubsets;
    vector<int> ans;

    getallsubsets(nums, ans, 0, allsubsets);
    return allsubsets;
}