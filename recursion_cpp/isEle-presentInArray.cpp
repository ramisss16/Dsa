#include<bits/stdc++.h>
using namespace std;

bool f(int *arr, int n, int i, int x){
    //base case
    if(i==n){
        return false;
    }

    return (arr[i]==x) || f( arr, n, i+1, x);
}


int main() {

    int arr[] = {5, 4, 7, 9, 10, 15, 20};
    int n = 7;
    int x = 10;
    bool result = f(arr, n, 0, x);
    if(result) cout<<"YES";
    else cout<<"NO";

    return 0;
}