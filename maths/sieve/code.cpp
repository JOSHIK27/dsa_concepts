#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n = 100;

    vector<bool> prime(101, false);

    // for a number which are greater than i*i, if we start find 1 * num, 2 * num .... num * num, all them would have been calculated before
    // and we dont have to care about greater multiples as they would exceed n (100)
    // say n = 10, take 4 -> 4*1, 4*2, 4*3 were already calculated and 4*4 is exceeding n
    // for same n = 10, take n = 2, 2*1, 2*2, 2*3, 2*4 must be calculated. For numbers greater than sqrt(n) we can avoid the calculation multiples completely.
    // in other words, if a number is greater than sqrt(n) we dont have to calc its multiples because num * i (i < num) would have calculated already and for i > num, that would exceed the n as num > sqrt(n)
    for(int i = 2; i*i <= n; i++) {
        if(prime[i] == false) {
            // we can start from i*i instead of i*2 because all the numbers which are less i would have been calculated already
            for(int j = i*i; j <= n; j += i) {
                prime[j] = true;
            }
        }
    }
    for(int i = 2; i <= n; i++) {
        if(!prime[i]) {
            cout<<i<<" ";
        }
    }

}