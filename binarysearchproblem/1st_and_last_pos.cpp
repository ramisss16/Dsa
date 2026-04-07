#include<bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> &input, int target){  //  first index >= target
    int lo = 0, hi = input.size()-1;
    int ans = -1;

    while (lo <=hi)
    {
        int mid = lo + (hi - lo)/2;

       if(input[mid] >= target){
          ans = mid;
          hi = mid-1;
       }
       else{
        lo = mid+1;
       }
    }

return ans;
    
}

int upperbound(vector<int> &input, int target){ // first index > target
    int lo = 0, hi = input.size()-1;
    int ans = -1;

    while (lo<=hi)
    {
        int mid = lo + (hi - lo)/2;
        if(input[mid]>target){
            ans  = mid;
            hi = mid-1;

        }
        else{
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

std:: vector<int> result;
int lb = lowerbound(arr, target);
if(arr[lb] != target){
    result.push_back(-1);
    result.push_back(-1);
}
else{
    int ub = upperbound(arr, target);
    result.push_back(lb);
    result.push_back(ub-1);
}
cout<<result[0]<<" "<<result[1]<<endl;

return 0;
}