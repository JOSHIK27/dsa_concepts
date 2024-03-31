#include<iostream>
using namespace std;


int binary_exp(int a, int n) {
    if(!n || a == 1) return 1;
    if(n == 1) return a;
    int temp = binary_exp(a, n/2);
    return n%2 ? (a*temp*temp) : (temp*temp);
}

int main() {
    cout<<binary_exp(2, 10)<<endl;
}