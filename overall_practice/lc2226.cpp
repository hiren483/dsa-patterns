#include<iostream>
using namespace std;

int getmax(vector<int>& candies){
    int Minimum = candies[0];
    for(int i = 1 ; i < candies.size() ; i++){
        Minimum = max(Minimum , candies[i]); 
    }
    return Minimum ;
}
long long division(vector<int>& candies, int mid){
    long long count = 0;

    for(int i = 0; i < candies.size(); i++){
        count += candies[i] / mid;
    }

    return count;
}

int maximumCandies(vector<int>& candies, long long k) {
    int low = 1;  
    int high = getmax(candies);
    int ans = 0;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(division(candies, mid) >= k){
            ans = mid;        
            low = mid + 1;    
        }
        else{
            high = mid - 1;  
        }
    }

    return ans;
}

int main(){
    
}
