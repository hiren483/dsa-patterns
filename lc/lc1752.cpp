#include<iostream>
using namespace std;
    
    bool issorted(vector<int> nums){
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>nums[i+1]) return false;
        }
        return true;
    }

    bool check(vector<int>& nums) {
        int count = 0;
        int n = num.size();
        for(int i=0; i<n ; i++){
            if(num[i]>num[i+1]){
                count++;
            }
        } 
        if(nums[0]<nums[n-1]) count++;
        if(count<=1) return true;
        return false;
        }
int main(){
    
}
