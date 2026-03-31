#include<iostream>
using namespace std;

int longestSubarray(vector<int>& nums) {
        int l = 0;
        int n = nums.size();
        int maxx = INT_MIN;
        int count = 0;
        for(int r = 0 ; r< n ; r++){
            if(nums[r]==0){
                count++;
            }
            if(count == 1){
                    maxx = max(maxx , r-l);
                }
            while(count>1){
                if(nums[l]==0){
                    count--;
                }
                l ++ ; 
                if(count == 1){
                    maxx = max(maxx , r-l);
                }
            }
        }
        if(maxx == INT_MIN){return n-1;}
        return maxx;
    }

int main(){
    
}
