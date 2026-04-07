#include<bits/stdc++.h>
using namespace std;

void countsort(vector<int> &v , int pos){

    int n = v.size();

    // create freq array
    vector<int> freq(10,0);
    for (int i = 0; i < n; i++)
    {
       freq[(v[i]/pos)%10]++;
    }
    
    // cumulative freq
    for (int i = 1; i < 10; i++)
    {
        freq[i] += freq[i-1];
    }

    // ans array
    vector<int> ans(n);
    for (int i =n-1; i >= 0; i--)
    {
       ans[--freq[(v[i]/pos)%10]] = v[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        v[i] = ans[i];
    }
    
    

}

void radixsort(vector<int> &v){

    int max_ele = INT16_MIN;
    for(auto x : v){
      max_ele = max(max_ele , x);
    }

    for(int pos = 1; max_ele/pos > 0; pos *= 10){
        countsort( v, pos);
    }
}

int main(){

    int n;
    cout<<"enter size of array: ";
    cin>>n;

    vector<int> a(n);
    cout<<"enter element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    radixsort(a);

    cout<<"sorted array: ";
    for (int i = 0; i < n; i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<endl;
    

return 0;
}