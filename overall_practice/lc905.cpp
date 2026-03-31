#include<iostream>
using namespace std;

vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int l = 0 , r = 1;
        while(r<n && l < n){
            if(nums[r]%2 !=0){//valid case
                r += 2;
            }
            if((nums[l]%2 == 0)){//valid case
                l += 2;
            }
            else{//invalid
                swap(nums[l],nums[r]);
                l+= 2;
                r += 2;
            }
        }
     return nums ;   
    }

int main(){
    
}
