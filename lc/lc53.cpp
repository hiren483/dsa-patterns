#include<iostream>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int current_sum = 0; 
        int max_sum = INT_MIN ; 
        int n = nums.size();
        for(int i=0; i<n; i++){
            current_sum += nums[i];
            max_sum = max(max_sum,current_sum);
            if(current_sum<0){
                current_sum = 0; 
            }
        }
        return max_sum;
    }

int main(){

}
