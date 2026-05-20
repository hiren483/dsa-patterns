class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp;
        int n = arr.size();
        for(int i=0; i<n;i++){
            temp.push_back(arr[i]);
        }
        sort(temp.begin(),temp.end());
        unordered_map<int,int> mp;
        int rank = 1;
        for(auto x : temp){
            if(mp.find(x)==mp.end()){
                mp[x]=rank;
                rank++;
            }
        }
        for(int i = 0; i< n ; i++){
            arr[i]=mp[arr[i]];
        }

        return arr;
    }
};