#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){

// map<string,int>directory;
map<string, int, greater <string > > directory;  //-> for ascending order

directory["Ramish"] = 6266;
directory["Ravi"] = 1234;
directory["shyam"] = 3987;

// for(auto ele:directory){
//     cout<<"Name  "<<ele.first<<endl;
//     cout<<"contno.  "<<ele.second<<endl;
// }

// directory["ravi"]=5426281234;
directory.insert(make_pair("Ramish" ,1234));  //--> not update becouse same value not considered
// for(auto ele:directory){
//     cout<<"Name  "<<ele.first<<endl;
//     cout<<"contno.  "<<ele.second<<endl;
// }

map<string, int>:: reverse_iterator itr; // ye reverse iterator ho jayega becouse rbegin()  and rend() used kr rhe hai 
for(itr = directory.rbegin(); itr!=directory.rend(); itr++){
cout<<itr->first<<"-"<<itr->second<<endl;
}

return 0;
}