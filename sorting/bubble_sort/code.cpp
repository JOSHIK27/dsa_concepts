#include<iostream>
using namespace std;

int main() {

    int arr[] = {4, 1, 3, 2, 0, 10, 4, 3, 6, 2, 50};
    for(int i = 0; i < 11; i++) {
        for(int j = 0; j < 11 - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    
    for(int i = 0; i < 11; i++) cout<<arr[i]<<" ";
}