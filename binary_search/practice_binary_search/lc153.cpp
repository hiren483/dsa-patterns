#include<iostream>
using namespace std;
int findMin(vector<int>& nums) {
        int st = 0 , end = nums.size()-1 ;
        while(st<end){
            int mid = st + (end-st)/2 ;
            if(arr[mid]>arr[end]){
                st = mid + 1;
            }
            else if(arr[mid]<arr[end]){
                end = mid ;
            }
        }
        return nums[st] ;
    }
int main(){
  
}
 