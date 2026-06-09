// class Solution {
// public:
//     int jump(vector<int>& nums) {
//         int n = nums.size();
//         int farthest = 0;
//         int jump=1;
//         for(int i = 1; i<n;i++){
//             if(i+nums[i]>farthest){
//                 jump++;
//                 farthest = i+nums[i];
//             }
//             if(farthest > n-1){
//                 return jump;
//             }
//         }
//         return jump;
//     }
// };


class Solution {
public:
    int jump(vector<int>& nums) {
       int n = nums.size();
       int current_end = 0;
       int jump = 0;
       int farthest = 0;
       for(int i = 0 ; i < n-1 ; i++){
        farthest = max(farthest,i+nums[i]);
        if(i==current_end){
            jump++;
            current_end=farthest;
        }
        if(current_end>n-1){
            return jump;
        }
       }
       return jump;
    }
};