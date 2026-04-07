#include<iostream>
using namespace std;

// ✅ Summary:
// We use arr as a pointer because C++ automatically passes arrays as pointers.

// This lets you efficiently access and manipulate elements without copying the whole array.

// You can still use arr[idx] syntax thanks to pointer arithmetic.
void f(int *arr, int idx, int n){
    //Base case
    if(idx==n) return;
    //self case
    cout<<arr[idx]<<"\n";
    //assume case
    f(arr, idx+1, n);  // asssume its works correctly
}

int main() {

    int n = 5;
    int arr[]= {6, 1, 9, 3, 4};
    f(arr, 0, n);
    return 0;
}