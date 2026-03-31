class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int n = nums.size()
       vector<int> prefix[n];
       prefix[0] = nums[0];
       for(int i = 1 ; i < n ; i++){
            prefix[i] = prefix[i-1]+nums[i];
       }
       int ans = 0;
       for(int )
    }
};