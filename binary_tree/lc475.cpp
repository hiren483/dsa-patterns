int findRadius(vector<int>& houses, vector<int>& heaters) {
    sort(heaters.begin(), heaters.end());
    
    int ans = 0;
    
    for (int house : houses) {
        int idx = lower_bound(heaters.begin(), heaters.end(), house) - heaters.begin();
        
        int dist1 = INT_MAX, dist2 = INT_MAX;
        
        if (idx < heaters.size())
            dist1 = abs(heaters[idx] - house);
        
        if (idx > 0)
            dist2 = abs(heaters[idx - 1] - house);
        
        int closest = min(dist1, dist2);
        ans = max(ans, closest);
    }
    
    return ans;
}