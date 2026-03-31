#include<iostream>
using namespace std;

    const long long MOD = 1e9 + 7;

    long long power(long long base, long long exp) {
        long long result = 1;
        base %= MOD;

        while (exp > 0) {
            if (exp & 1)
                result = (result * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        long long evenPos = (n + 1) / 2; // ceil
        long long oddPos  = n / 2;       // floor

        long long part1 = power(5, evenPos);
        long long part2 = power(4, oddPos);

        return (part1 * part2) % MOD;
    }
    

int main(){
    
}
