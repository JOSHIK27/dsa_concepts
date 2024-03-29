#include<iostream>
#include<vector>
using namespace std;

int main() {
    
    vector<int> arr = { 20, -10, -19, -5, 0, 99, 1, 3, 2 };
    for(int i = 0; i < arr.size(); i++) {
        int j = i;
        while(j >= 1) {
            if(arr[j] < arr[j-1]) {
                swap(arr[j], arr[j-1]);
                j--;
            }
            else {
                break;
            }
        }
    }

    for(int i : arr) cout<<i<<" ";

}