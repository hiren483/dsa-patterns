class Solution {
public:
    bool ok(int mid,int n,int k){
        long long val = 1;
        for(int i =0 ; i< k;i++){
            val *= mid;
            if(val>n){
                return false;
            }
        }
        return true;
    }
    int countt(int n,int k){
        if(n<0){return 0;}
        int count =0;
        int high =n;
        int low = 0;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(ok(mid,n,k)){
                low = mid+1;
                count=  mid;
            }
            else{
                high = mid-1;
            }
            
        }
        return count+1;
    }
    int countKthRoots(int l, int r, int k) {
        return countt(r, k)-countt(l-1,k);
    }
};