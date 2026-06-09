class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r=0;
        if(nums.empty()) return 0;
        while(r<n){
            if(nums[r]==nums[l]){
                r++;
            }
            else{
                l++;
                swap(nums[l],nums[r]);
                r++;
            }
        }
        return l+1;
    }
};