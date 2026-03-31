class Solution {
public:
    void find(int n , int& sum , int& product){
        while(n > 0){
            int x = n%10;
            sum= sum + x;
            product = product*x ;
            n = n/10;
        }
    }
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        find(n,sum,product);
        return product - sum;
    }
};