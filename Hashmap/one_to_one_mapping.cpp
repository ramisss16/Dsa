#include<bits/stdc++.h>
using namespace std;

bool checkNOoneTomany(string s1, string s2){
    unordered_map<char, char> m;

    for (int i = 0; i < s1.length(); i++)
    {
       if(m.find(s1[i]) != m.end()){
        if(m[s1[i]]!=s2[i]){   // agar same char firse mila to ham uski value check ki vo use se map hai ya nhi 
            return false;
        }
       }
       else{
        m[s1[i]]= s2[i];
       }
    }
    return true;
    
}

bool checkOneTOonemappin(string s1, string s2){
    if(s1.length( ) != s2.length()){
        return false;
    }

    // check for string s1
    bool s1s2 = checkNOoneTomany(s1,s2);

    // check for string s2
    bool s2s1 = checkNOoneTomany(s2, s1);

    return s1s2 && s2s1;
}
int main(){

    string s1, s2;
    cin>>s1>>s2;

    cout<<(checkOneTOonemappin(s1,s2) ? "is isomorphic": "no isomorphic")<<endl;

return 0;
}