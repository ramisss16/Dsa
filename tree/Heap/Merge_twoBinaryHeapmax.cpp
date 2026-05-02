#include<bits/stdc++.h>
using namespace std;

void Heapify(vector<int>& v, int size, int curr){

    while(2*curr <= size){

        int leftchild = 2*curr;
        int rightchild = 2*curr + 1;
        int maxchild  = leftchild;

        if(rightchild <= size && v[rightchild] > v[leftchild]){
            maxchild = rightchild;
        }

        if(v[maxchild] <= v[curr]){
            return;
        }

        swap(v[maxchild], v[curr]);
        curr = maxchild;
    }
}

vector<int> mergemaxheap(vector<int>& arr1, vector<int>& arr2){

    vector<int> mergeheap;
    
    mergeheap.push_back(-1); // dummy for 1-based indexing

    for(int e: arr1) mergeheap.push_back(e);
    for(int e: arr2) mergeheap.push_back(e);

    int size = mergeheap.size() - 1;

    // build max heap
    for(int i = size/2; i > 0; i--){
        Heapify(mergeheap, size, i);
    }

    return mergeheap;
}

int main(){

    vector<int> arr1 = {10, 5, 6};
    vector<int> arr2 = {12, 7, 9};

    vector<int> result = mergemaxheap(arr1, arr2);

    for(int i = 1; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0; 
}