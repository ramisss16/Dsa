
// print max element from the array using recursion 

#include<iostream>
using namespace std;

int f(int *arr, int idx, int n){
    if(idx==n-1){
        //base case
        return arr[idx];
    }
    return max(arr[idx],f(arr, idx+1,n));
}
int main() {

    int arr[] = {3,10,3,2,15};
    int n =5;
    cout<<f(arr,0,n);

    return 0;
}