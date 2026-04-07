#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(){

    unordered_multiset<int>s;
    s.insert(4);
    s.insert(8);
    s.insert(3);
    s.insert(1);
    s.insert(4);

    for(auto value:s){
        cout<<value<<" ";
    }cout<<endl;

return 0;
}