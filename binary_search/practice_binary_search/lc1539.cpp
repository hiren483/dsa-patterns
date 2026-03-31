#include<iostream>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
        int count = 0;
        int i = 0;
        while(count != k){
            if(find(arr.begin(), arr.end(), i) == arr.end()){
                count++;
                if(count == k){return i;}
            }
            i++ ;
        }
    }
int main(){
  
}