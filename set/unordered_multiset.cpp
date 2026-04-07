#include<bits/stdc++.h>
using namespace std;

int main(){


    unordered_multiset<int>s;
    s.insert(3);
    s.insert(1);
    s.insert(2);
    s.insert(1);

    for(auto value:s){
        cout<<value<<" ";
    }cout<<endl;
    
return 0;
}