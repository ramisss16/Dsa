#include<bits/stdc++.h>
using namespace std;

void Heapify(int arr[], int & size, int curr){

    while(2*curr <=size){

        int leftchild = 2*curr;
        int rightchild = 2*curr + 1;
        int maxchild  = leftchild;

        if(rightchild <= size && arr[rightchild] > arr[leftchild]){
            maxchild = rightchild;
        }

        if(arr[maxchild] <= arr[curr]){
            return;
        }

        swap(arr[maxchild], arr[curr]);
        curr = maxchild;
    }
}

int main(){

    int arr[] = {-1, 60, 10, 80, 50, 5, 20, 70};
    int size = 7;

    // i -> parent node
    for(int i = size/2; i>0; i--){
        Heapify(arr, size, i);
    }

    // print
    for(int i =1; i<=size; i++){
         cout<<arr[i]<<" ";
    }

return 0;
}