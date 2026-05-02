#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int curr){
    while(2*curr <= n){
        int leftchild = 2*curr;
        int rightchild = 2*curr + 1;
        int maxchild = leftchild;

        if(rightchild <= n && arr[rightchild] > arr[leftchild]){
            maxchild = rightchild;
        }

        if(arr[maxchild] <= arr[curr]){
            return;
        }

        swap(arr[maxchild], arr[curr]);
        curr = maxchild;
    }
}

void heapSort(int arr[], int n){

    // build heap
    for(int i = n/2; i > 0; i--){
        heapify(arr, n, i);
    }

    // sort
    for(int i = n; i > 1; i--){
        swap(arr[1], arr[i]);
        heapify(arr, i-1, 1);
    }
}

int main(){

    int arr[] = {-1, 60, 10, 80, 50, 5, 20, 70};
    int n = 7;

    heapSort(arr, n);

    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}