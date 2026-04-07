#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cout<<"enter size of ele: ";
cin>>n;
 
vector<int> input(n);
cout<<"enter ele. of array: ";
for (int i = 0; i < n; i++)
{
    cin>>input[i];
}

map<int, int> m;  // hame dono int type k chahiye
for(int i = 0; i<n; i++){
 // storing frequency of ele
 m[input[i]]++;            
 // yha jese 1 aaya to = [1. 1]
 // firse 1 aaya to = [1, 2]
 // firse 1 aaya to = [1,3]
 // 7 ayya to = [7,1]
}

int sum = 0;
for(auto pair: m){
    if(pair.second>1){
        sum+=pair.first;
    }
}

cout<<"Ans-"<<sum<<endl;

return 0;
}