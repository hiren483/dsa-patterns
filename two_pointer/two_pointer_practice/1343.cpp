#include<iostream>
#include<unordered_map>
using namespace std;
int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int arraycount = 0;
        for(int r = 0 ; r< arr.size() ; r++){
            sum += arr[r];
            if (r >= k - 1) {
                if(sum/k >= threshold){arraycount++;}
                sum -= arr[r - (k - 1)];
            }
        }
        return arraycount;
    }

int main(){
    

}
