#include<iostream>
#include<unordered_map>
using namespace std;

int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();

    // Edge case: take all cards
    if (k == n) {
        int total = 0;
        for (int x : cardPoints) total += x;
        return total;
    }

    int windowSize = n - k;
    int windowSum = 0;

    // initial window
    for (int i = 0; i < windowSize; i++) {
        windowSum += cardPoints[i];
    }

    int min_sum = windowSum;
    int total_sum = windowSum;

    // remaining sum
    for (int i = windowSize; i < n; i++) {
        total_sum += cardPoints[i];
        windowSum += cardPoints[i];                 // add right
        windowSum -= cardPoints[i - windowSize];   // remove left
        min_sum = min(min_sum, windowSum);
    }

    return total_sum - min_sum;
}


int main(){
    

}
