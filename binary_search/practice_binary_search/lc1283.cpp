#include<iostream>
using namespace std;

int ceiling(int n , int k){
    if(n%k == 0) return n/k ;
    else return n/k + 1;
}

int maxx(vector<int> nums){
    int maximum = 0;
    for(int i = 0; i< nums.size() ; i++ ){
        maximum = max(maximum , nums[i]);
    }
    return maximum;
}

int sum(vector<int> nums , int d){
    int sum =0;
    for(int i = 0; i< nums.size() ; i++){
        sum += ceiling(nums[i],d);
    }
    return sum ;
}

int smallestDivisor(vector<int>& nums, int threshold) {
        int st = 1 , end = maxx(nums);
        while(st < end){
            int mid = st + (end - st)/2 ;
            if(sum(nums , mid)>threshold){
                st = mid + 1;
            }
            else if(sum(nums , mid)<= threshold){
                end = mid ;
            }
        }
        return st;
    }

int main(){
  
}