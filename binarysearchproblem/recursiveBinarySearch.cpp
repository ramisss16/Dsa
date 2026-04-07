#include<bits/stdc++.h>
using namespace std;

int binaryrecursivesearch(vector<int> &input, int target, int lo, int hi){
    if (lo>hi) return -1;

    // int mid  = (lo+hi)/2;
    int mid = lo + (hi-lo)/2;  // modified formula for overflow condition

    if(input[mid] == target) return mid;

    else if(input[mid]< target){
        return binaryrecursivesearch(input , target, mid+1, hi);
    }
    else{
         return binaryrecursivesearch(input , target, lo, hi-1);
    }
}

int main(){
int n;
cout<<"enter size of array: ";
cin>>n;

vector<int> input;
cout<<"enter elements of array: ";
for (int i = 0; i < n; i++)
{
   int var;
   cin>>var;
   input.push_back(var);
}

  int x;
    cout << "Enter target element: ";
    cin >> x;

    int result = binaryrecursivesearch(input, x, 0, n-1);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;



return 0;
}