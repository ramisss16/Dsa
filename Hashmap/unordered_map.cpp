#include<bits/stdc++.h>
using namespace std;

int main(){

unordered_map<int, string> record;

record.insert(make_pair(1 , "riya"));
record[2] = "Ramish";
record[3] = "zara";
record.insert(make_pair(1,"payal")); // nothing works becouse copy store nhii hoti
//record[1] = "payal";  // this will update the name in roll no.

for(auto ele: record){
    cout<<"Roll_no. - "<<ele.first<<endl;
    cout<<"Name - "<<ele.second<<endl;
}
return 0;
}