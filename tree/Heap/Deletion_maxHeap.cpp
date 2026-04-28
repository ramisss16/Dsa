#include<bits/stdc++.h>
using namespace std;

int const n = 1e3;

// Insert in Max Heap
void InsertMaxHeap(int maxheap[], int &size, int value){
    
    size++;
    maxheap[size] = value;
    
    int curr = size;

    // Bubble up (Max Heap)
    while(curr/2 > 0 && maxheap[curr/2] < maxheap[curr]){
        swap(maxheap[curr/2], maxheap[curr]);
        curr = curr/2;
    }
}

// Delete root from Max Heap
void DeletionMaxHeap(int maxheap[], int &size){

    // Step 1: Replace root with last element
    maxheap[1] = maxheap[size];
    size--;

    int curr = 1;

    // Step 2: Heapify down
    while(2*curr <= size){
        int leftchild = 2*curr;
        int rightchild = 2*curr + 1;
        int maxchild  = leftchild;

        // choose larger child
        if(rightchild <= size && maxheap[rightchild] > maxheap[leftchild]){
            maxchild = rightchild;
        }

        // if already correct → stop
        if(maxheap[curr] >= maxheap[maxchild]){
            break;
        }

        // swap
        swap(maxheap[curr], maxheap[maxchild]);
        curr = maxchild;
    }
}

int main(){

    int maxheap[n] = {-1, 60, 50, 40, 30, 20, 30, 10};
    int size = 7;
    int value = 100;

    // Insert
    InsertMaxHeap(maxheap, size, value);

    // Print after insert
    for(int i = 1; i <= size; i++){
        cout << maxheap[i] << " ";
    }
    cout << endl;

    // Delete
    DeletionMaxHeap(maxheap, size);

    // Print after delete
    for(int i = 1; i <= size; i++){
        cout << maxheap[i] << " ";
    }

    return 0;
}