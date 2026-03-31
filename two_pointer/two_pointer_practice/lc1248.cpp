#include<iostream>
#include<unordered_map>
using namespace std;

int helper(vector<int> nums, int k){
        if(k < 0){return 0;}
        int l = 0;
        int odd_count = 0;
        int count = 0;
        for(int r = 0 ; r< nums.size() ; r++){
            if(nums[r]%2 != 0){odd_count++ ;}
            while(odd_count>k){
                if(nums[l]%2 != 0){
                    odd_count--;
                    l++;
                }
                else { l++ ;}
            }
            count += r-l+1 ;
        }
        return count ;
}

int numberOfSubarrays(vector<int>& nums, int k) {
        return helper(nums , k)- helper(nums , k-1);
    }

int main(){
    

}
