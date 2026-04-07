#include<bits/stdc++.h>
using namespace std;

int findMiniEleInRotated(vector<int> &input){
    if(input.size() == 1) return input[0]; // single ele. array

    int lo = 0, hi = input.size()-1;
    if(input[lo]<input[hi]) { // sorted array
        return lo;
    }
    // rotated sorted array
    while (lo<=hi)
    {
       int mid  = lo + (hi-lo)/2;
       if(input[mid]>input[mid+1]) return mid+1;
       if(input[mid]<input[mid-1] ) return mid;

       if(input[mid]> input[lo]){
        lo = mid+1;
       }
       else{
        hi = mid-1;
       }
       
    }
    
}
int main(){
int n;
cout<<"enter size of array: ";
cin>>n;

vector<int> arr;
cout<<"enter elements of array: ";
for (int i = 0; i < n; i++)
{
    int var;
    cin>>var;
    arr.push_back(var);
}

cout<<findMiniEleInRotated(arr)<<endl;

return 0;
}