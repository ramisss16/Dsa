#include<bits/stdc++.h>
using namespace std;

int main(){

multimap<string, int> directory;

directory.insert(make_pair("urvi", 621345));
directory.insert(make_pair("Ramish", 626627));
directory.insert(make_pair("urvi", 626262));
// directory["Ramish" ] = 9301; ---> nor aloowed

for(auto ele: directory){
    cout<<"name - "<<ele.first<<endl;
    cout<<"mo. no. - "<<ele.second<<endl;
}

return 0;
}