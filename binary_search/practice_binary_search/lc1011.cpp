#include<iostream>
using namespace std;

int arraysum(vector<int>& weights){
    int sum = 0;
    for(int i = 0; i<weights.size() ; i++){
        sum += weights[i];
    }
    return sum;
}
int maxx(vector<int>& weights){
    int maximum = 0;
    for(int i = 0; i< weights.size() ; i++){
        maximum = max(weights[i],maximum);
    }
    return maximum;
}
int reqdays(vector<int>& weights, int cap) {
    int days = 1;
    int load = 0;
    int i = 0;

    while (i < weights.size()) {
        if (load + weights[i] > cap) {
            days++;          
            load = 0;          
        } else {
            load += weights[i]; 
            i++;                
        }
    }
    return days;
}

int shipWithinDays(vector<int>& weights, int days) {
        int low = maxx(weights) , high = arraysum(weights);
        while(low<high){
            int mid = low + (high-low)/2 ;
            int day = reqdays(weights , mid);
            if( day <= days){
                high = mid ;
            }
            else if(day > days){
                low = mid + 1 ;
            }
        }
        return low ;
    }

int main(){
    
}
