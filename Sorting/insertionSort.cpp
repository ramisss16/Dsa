#include<bits/stdc++.h>
using namespace std;

void insertionsort(vector<int> &v){

    int n =v.size();
    for (int i = 1; i < n; i++)
    {
       int current_ele = v[i];
       
       int j = i-1;

       // find the correct position of our  current element
       while (j>=0 && v[j]>current_ele)
       {
              // shift element forward to one position
              v[j+1] = v[j];
              j--;
       }

       // place current element to its correct position
       v[j+1] = current_ele;
       
    }
    
    return;
}
int main() {

    int n;
    cout<<"enter size of array: ";
    cin>>n;

    vector<int> v(n);
    cout<<"enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
     
    insertionsort(v);

    cout<<"sorted array: ";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    } cout<<endl;

    return 0;
}
