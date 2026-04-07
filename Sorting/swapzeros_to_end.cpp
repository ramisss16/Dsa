
// lecture no. - 38

#include<bits/stdc++.h>
using namespace std;

void swapZerosToEnd(vector<int> &v){

    int n = v.size();

    for (int i = n-1; i >=0; i--)
    {
       int j= 0;
       bool flag = false;

       while(j!=i){
        if(v[j]==0 && v[j+1] != 0){
            swap(v[j],v[j+1]);
            flag = true;
        }
        j++;
       }
       if(!flag) break;
    }
    return;
}
int main() {

    int n; 
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter elemnets of array: ";
    for (int i = 0; i < n; i++)
    {
      cin>>v[i];
    }
 
     swapZerosToEnd(v);

    cout<<"sorted array: ";
    for (int i = 0; i < n; i++)
    {
       cout<<v[i]<<" ";
    }
    
    

    return 0;
}