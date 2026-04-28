#include<bits/stdc++.h>   // includes all standard libraries
using namespace std;

int const n = 1e3;        // maximum heap size

// Function to insert element into Min Heap
void InsertMaxHeap(int maxheap[], int &size, int value){
    
    size++;                      // increase heap size
    maxheap[size] = value;       // insert value at last position
    
    int curr = size;             // current index of inserted element

    // Heapify (bubble up)
    // Compare with parent and swap if parent is greater
    while(curr/2 > 0 && maxheap[curr/2] < maxheap[curr]){
        
        swap(maxheap[curr/2], maxheap[curr]);  // swap with parent
        curr = curr/2;                         // move to parent index
    }
}

int main(){

    // Initial heap (1-based indexing, index 0 is dummy)
    int maxheap[n] = {-1, 60, 50, 40, 30, 20, 30, 10};
    
    int size = 7;      // current number of elements in heap
    int value = 100;     // value to be inserted

    // Insert new value into heap
    InsertMaxHeap(maxheap, size, value);

    // Print heap elements
    for(int i = 1; i <= size; i++){
        cout << maxheap[i] << " ";
    }
    
    cout << endl;

    return 0;
}