#include<iostream>
#include<vector>
using namespace std;


void merge(int i, int mid, int j, vector<int> &arr) {
    vector<int> v;
    int s1 = i, e1 = mid, s2 = mid+1, e2 = j;
    while(s1 <= e1 && s2 <= e2) {
        if(arr[s1] < arr[s2]) {
            v.push_back(arr[s1]);
            s1++;
        }
        else {
            v.push_back(arr[s2]);
            s2++;
        }
    }
    while(s1 <= e1) {
        v.push_back(arr[s1]);
        s1++;
    }
    while(s2 <= e2) {
        v.push_back(arr[s2]);
        s2++;
    }
    int cnt = 0;
    for(int k = i; k <= j; k++) {
        arr[k] = v[cnt];
        cnt++;
    }
}

void merge_sort(int i, int j,vector<int> &arr) {
    if(i >= j) return;
    int mid = (i + j)/2;
    merge_sort(i, mid, arr);
    merge_sort(mid+1, j, arr);
    merge(i, mid, j, arr);
}

int main() {


    vector<int> arr = { 20, -10, -19, -5, 0, 99, 1, 3, 2 };
    merge_sort(0, arr.size()-1, arr);

    for(int i : arr) cout<<i<<" ";

}