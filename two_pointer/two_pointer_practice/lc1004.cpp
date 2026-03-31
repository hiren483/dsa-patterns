#include<iostream>
#include<unordered_map>
using namespace std;

int longestOnes(vector<int>& nums, int k) {
    int l = 0; 
    int zeros = 0; 
    int ans = 0; 
    for(int r = 0 ; r< nums.size()-1 ; r++){
        if(nums[r]== 0) zeros++;
        while(zeros>k){
            if(nums[l]==0){
                zeros--;
            }
            l++;
        }
        ans = max(ans , r - l+1);
    }
    return ans ;
}


int main(){
    

}
