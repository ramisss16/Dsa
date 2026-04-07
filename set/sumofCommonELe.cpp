#include<bits/stdc++.h>
using namespace std;

int main(){

int n ,m;
cout<<"enter size of vectors:"<<" ";
cin>>n>>m;

vector<int> v1(n);
vector<int>v2(m);

cout<<"enter elements of v1:   ";
for (int i = 0; i < n; i++)
{
    cin>>v1[i];
}

cout<<"enter elements of v2:   ";
for (int i = 0; i < m; i++)
{
    cin>>v2[i];
}
 int ans = 0;
 set<int> s;
 for(auto ele: v1){
    s.insert(ele);
 }

 for(auto ele: v2){
    if(s.find(ele) != s.end()){
        ans+=ele;
    }
 }
 
 cout<<"ANs: "<<ans<<endl;
return 0;
}