class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin(),hand.end());
        int n = hand.size();
        if(n%groupSize != 0){
            return false;
        }
        map<int,int> mp;
        for(int i = 0 ; i < n ; i++){
            mp[hand[i]]++;
        }
        for(int x: hand ){
            if(mp[x]==0){
                continue;
            }
            mp[x]--;
            for(int i = 1; i<groupSize; i++){
                if(mp[x+i] == 0){
                    return false;
                }
                else{
                    mp[x+i]--;
                    continue;
                }
            }
        }
        return true;
    }
};