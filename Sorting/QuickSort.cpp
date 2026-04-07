#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int first, int last){
    
    int pivot = arr[last];
    int i = first -1; // for inserting at beginning < pivot
    int j = first; //for finding element < pivot
    for(;j<last; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    //now i is pointing to the last elemnt < pivot
    //correct position of pivot will be - i+1
    swap(arr[i+1], arr[last]);
    return i+1;
}

 void Quicksort(int arr[], int first, int last){

    //base case
    if(first>=last) return;

    int pi = partition(arr, first, last);
    // recursive call
    Quicksort(arr, first,pi-1 );
    Quicksort(arr, pi+1, last);
}

int main(){

    int arr[] = {20, 12, 35 ,16, 18, 30};
    int n = sizeof(arr)/sizeof(arr[0]);

    Quicksort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
cout<<endl;


return 0;
}