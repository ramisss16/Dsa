#include<bits/stdc++.h>
using namespace std;

int main(){

set<string> invitelist;

int n;
cout<<"enter your no. of names:"<<" ";
cin>>n;

cout<<"enter your names:"<<" ";
while (n--)
{
    string name;
    cin>>name;

    invitelist.insert(name);
}

cout<<"invite list is:"<<endl;
for(auto name: invitelist){
    cout<<name<<" ";
}cout<<endl;


return 0;
}