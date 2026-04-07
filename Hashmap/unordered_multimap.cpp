#include<bits/stdc++.h>
using namespace std;

int main(){

unordered_multimap<string, int> fruitcount;

fruitcount.insert(make_pair("Apple", 6));
fruitcount.insert(make_pair("banan", 12));
fruitcount.insert(make_pair("Apple", 8));

for(auto pair:fruitcount){
    cout<<"name - "<<pair.first<<endl;
    cout<<"count -"<<pair.second<<endl;
}
return 0;
}