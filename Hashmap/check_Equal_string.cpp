#include<bits/stdc++.h>
using namespace std;

bool canMakeString(vector<string> &v){
    unordered_map<char, int> m;

    for(auto str: v){  //  this loop for traverse every string of vector
        for(char c:str){  // this loop  for traverse every character of string

             // yha jese 1 aaya to = [1. 1]
 // firse 1 aaya tp = [1, 2]
 // firse 1 aaya to = [1,3]
 // 7 ayya to = [7,1]
            m[c]++;
        }
    }

    int n = v.size();
    for(auto ele: m){
        if(ele.second%n!=0){
            return false;
        }
    }
    return true;
}
int main(){

int n;
cin>>n;
 
vector<string>v(n);
for (int i = 0; i < n; i++)
{
    cin>>v[i];
}

cout<<(canMakeString(v)? "yes":"no")<<endl;

return 0;
}