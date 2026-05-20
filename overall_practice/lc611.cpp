class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int k = n-1;
        int ans = 0;
        for(k=n-1; k>=2; k--){
            int l = 0;
            int r = k-1;
            while(l<r){
                if(nums[l]+nums[r]>nums[k]){
                    ans += r-l;
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return ans ;
    }
};