#include<iostream>
using namespace std;
int maxx(vector<int> arr){
    int max = 0;
    for(int i = 0 ; i<arr.size() ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int ceiling(int n , int k){
    if(n%k == 0) return n/k ;
    return n/k + 1 ;
}
int time(vector<int> arr , int k){
    int time = 0;
    for(int i = 0 ; i< arr.size() ; i++){
        time = time + ceiling(arr[i], k);
    }
    return time ;
}
int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 , high = maxx(piles);
        while(low<high){
            int mid = low + (high - low)/2 ;
            int hours = time(piles , mid);
            if(hours <= h){
                high = mid ;
            }
            else if(hours > h){
               low = mid + 1 ; 
            }
           
        }
        return low ;

    }
int main(){
  
}