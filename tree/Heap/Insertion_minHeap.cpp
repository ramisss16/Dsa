#include<bits/stdc++.h>   // includes all standard libraries
using namespace std;

int const n = 1e3;        // maximum heap size

// Function to insert element into Min Heap
void InsertMinHeap(int minheap[], int &size, int value){
    
    size++;                      // increase heap size
    minheap[size] = value;       // insert value at last position
    
    int curr = size;             // current index of inserted element

    // Heapify (bubble up)
    // Compare with parent and swap if parent is greater
    while(curr/2 > 0 && minheap[curr/2] > minheap[curr]){
        
        swap(minheap[curr/2], minheap[curr]);  // swap with parent
        curr = curr/2;                         // move to parent index
    }
}

int main(){

    // Initial heap (1-based indexing, index 0 is dummy)
    int minheap[n] = {-1, 10, 20, 30, 40, 50};
    
    int size = 5;      // current number of elements in heap
    int value = 5;     // value to be inserted

    // Insert new value into heap
    InsertMinHeap(minheap, size, value);

    // Print heap elements
    for(int i = 1; i <= size; i++){
        cout << minheap[i] << " ";
    }
    
    cout << endl;

    return 0;
}