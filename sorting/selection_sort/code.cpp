#include<iostream>
using namespace std;

int main() {

    int arr[] = {4, 1, 3, 2, 0, 10, 4, 3, 6, 2, 50};
    
    for(int i = 0; i < 11; i++) {
        for(int j = i+1; j < 11; j++) {
            if(arr[j] < arr[i]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    
    for(int i = 0; i < 11; i++) cout<<arr[i]<<" ";
}