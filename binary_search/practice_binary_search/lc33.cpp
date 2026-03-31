#include<iostream>
using namespace std;
int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size()-1;
        //we find index of minimum element in array
        while(st<end){
            int mid = st + (end-st)/2;
            if(nums[mid]>nums[end]){
                st = mid+1;
            }
            if(nums[mid]<nums[end]){
                end = mid;
            }
        }
        int pivot = st;
        st = 0, end = pivot -1;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(nums[mid]>target){
                end = mid -1;
            }
            else if(nums[mid]<target){
                st = mid + 1;
            }
            else return mid; 
        }
        st = pivot, end = nums.size()-1;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(nums[mid]>target){
                end = mid -1;
            }
            else if(nums[mid]<target){
                st = mid + 1;
            }
            else return mid; 
        }
        return -1 ;

    }
int main(){
  
}
 