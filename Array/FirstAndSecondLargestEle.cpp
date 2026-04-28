#include<bits/stdc++.h>
using namespace std;

pair<int,int> findLargestSecond(int arr[], int size){
    int largest = INT_MIN;
    int second = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }

    return {largest, second};  // ✅ returning both
}

int main(){
    int arr[] = {10, 23, 7, 8, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    pair<int,int> ans = findLargestSecond(arr, size);

    cout << "Largest: " << ans.first << endl;
    cout << "Second Largest: " << ans.second << endl;

    return 0;
}