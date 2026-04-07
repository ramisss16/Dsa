#include<bits/stdc++.h>
using namespace std;


int firstoccurrence(vector<int> &input, int target){
    int lo = 0;
    int hi =  input.size()-1;

    int ans = -1;

    while (lo<=hi)
    {
       int mid = lo + (hi - lo)/2;

       if(input[mid] == target){
          ans = mid;
          hi = mid-1;
       }

       else if(input[mid]>target){
            hi = mid-1;
       }
       else {
        lo = mid+1;
       }
            
    }
    
    return ans;

    
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

int target;
cout<<"enter the target: ";
cin>>target;

cout<<firstoccurrence(arr, target)<<endl;
return 0;
}