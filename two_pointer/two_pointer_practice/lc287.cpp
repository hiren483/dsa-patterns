class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> hashmap(n-1,0);
        for(int i=0; i<n;i++){
            hashmap[nums[i]-1]++;
            if(hashmap[nums[i]-1]>1){
                return nums[i];
            }
        }
        return 0;
    }
};