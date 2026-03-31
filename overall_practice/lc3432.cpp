class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixsum(n);
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            if(i == 0){
                prefixsum[i]=nums[i];
            }
            else{
                prefixsum[i] = prefixsum[i-1] + nums[i];
            }
        }
        int total_sum = prefixsum[n-1];
        for(int i = 0 ; i < n -1; i ++){
            if((2*prefixsum[i] - total_sum)%2==0){
                count++;
            }
        }
        return count;
    } 
};