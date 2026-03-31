#include<iostream>
#include<unordered_map>
using namespace std;
int helper(vector<int> nums, int goal){
    if(goal == -1){return 0;}
    int l = 0;
    int windowsum = 0;
    int count = 0;
    for(int r = 0; r< nums.size() ; r++){
        windowsum += nums[r];
        while(windowsum>goal){
            windowsum -= nums[l];
            l++;
        }
        count += r - l + 1;
    }
    return count ;
}

int numSubarraysWithSum(vector<int>& nums, int goal){
            return helper(nums , goal) - helper(nums , goal-1)

        }

int main(){
    

}
