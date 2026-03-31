class Solution {
public:
    int atmostk(vector<int>& nums, int k){
        int n = nums.size();
        unordered_map<int , int> mp;
        // for(int i = 0 ; i < n ; i++){
        //     mp[nums[i]++];
        // }
        int l = 0;
        int r = 0;
        int subaaray_count=0;
        int diffrent_value=0;
        for(int r = 0 ; r < n ; r++){
            mp[nums[r]]++;
            if(mp[nums[r]]==1){
                diffrent_value++;
            }
            while(diffrent_value>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    diffrent_value--;
                }
                l++;
            }
            subaaray_count += r - l + 1;
            
        }
        return subaaray_count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostk(nums,k) - atmostk(nums,k-1);
    }
};