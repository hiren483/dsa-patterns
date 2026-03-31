#include<iostream>
using namespace std;
   int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max = 0;
        // for(int i=0; i<n ; i++){
        //     for(int j= i+1 ; j< n ; j++){
        //         if(prices[j]-prices[i]>max){
        //             max = prices[j]-prices[i];
        //         }
        //     }
        // }
        int n = prices.size();
        int maxProfit = 0;
        int bestbuy = prices[0];
        for(int i = 1 ; i<n ; i++){
             if(prices[i]-bestbuy > maxProfit){
                maxProfit = prices[i]-bestbuy;
             }
             bestbuy = min(bestbuy , prices[i]);
        }
        return maxProfit;
    }

    int main(){
    
}
