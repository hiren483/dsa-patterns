#include<iostream>
using namespace std;

double timeTaken(vector<int>& dist, int speed) {
    double time = 0.0;
    int n = dist.size();

    for (int i = 0; i < n - 1; i++) {
        time += ceil((double)dist[i] / speed);
    }

    time += (double)dist[n - 1] / speed;

    return time;
}

int minSpeedOnTime(vector<int>& dist, double hour) {
    int n = dist.size();

    if (hour < n - 1) return -1;

    int low = 1, high = 1e7;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        double t = timeTaken(dist, mid);

        if (t <= hour) {
            ans = mid;
            high = mid - 1;   
        } else {
            low = mid + 1;    
        }
    }

    return ans;
}

int main(){
    
}
