#include<bits/stdc++.h>
using namespace std;

//  ----> given a series of n daily price quotes for a stack, we need to calculate the span of the stocks
// price for all n days. the span of the stocks price in one day is the maximum no. of cinsucutive days
// for which the stock price was less than or equal to the price of that day  
vector<int> PGE(vector<int> &arr){
    int n = arr.size();
    reverse(arr.begin(),arr.end());
    vector<int> output(n,-1);
    stack<int> st; // indexes
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() and arr[i]>arr[st.top()])
        {
           output[st.top()] = n - i-1;  //becouse after reverse the indexes will be chnages
           st.pop();
        }
        st.push(i);
        
        
    }
    while (not st.empty())  // it is mandotory becouse hamne phle se -1 assign kr rkha hai
    {
        output[st.top()] = -1;
        st.pop();
    
    }
    reverse(output.begin(),output.end());
   reverse(arr.begin(),arr.end());

    return output;

}
int main(){

    int n;
    cin>>n;
    vector<int> v;
    while (n--)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    

    vector<int> res = PGE(v);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<(i-res[i])<<" ";
    }
    
return 0;
}