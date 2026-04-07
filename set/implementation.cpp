#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){

    set<int> set1;
    // set<int,greater<int>>set1; // decresing order
    set1.insert(4);
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
    set1.insert(5);

    cout<<set1.size()<<endl;

    set1.insert(2);
   cout<<set1.size()<<endl; // size remain same becouse set cannot store duplicate value

   // traversing a set
//    set<int>::iterator itr;

//    for(itr = set1.begin(); itr!=set1.end(); itr++){
//     cout<<*itr<<" ";
//    }cout<<endl;

//--> for each loop
for(auto value: set1){
    cout<<value<<" ";
}cout<<endl;

//--->deletion in a set
// set1.erase(4);  

// auto itr = set1.begin();
// advance(itr,3);
// set1.erase(itr);

auto itr_str = set1.begin();
itr_str++;
auto itr_end = set1.begin();
advance(itr_end,3);
set1.erase(itr_str, itr_end);
for(auto value: set1){
    cout<<value<<" ";
}cout<<endl;
return 0;
}