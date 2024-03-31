#include<iostream>
using namespace std;


int partition(int i, int j, vector<int>& arr) {

    int val = arr[j];
    
}


void quick_sort(vector<int> &arr,int i, int j) {
    if(i >= j) return;
    int p = partition(i, j, arr);
    quick_sort(arr, i, p-1);
    quick_sort(arr, p+1, j);
}



int main() {
    vector<int> arr = { 20, -10, -19, -5, 0, 99, 1, 3, 2 };
}