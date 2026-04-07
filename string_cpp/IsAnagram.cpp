#include<bits/stdc++.h>
using namespace std;

bool IsAnamgram(string s1, string s2){

    // create freq array
    vector<int> freq(26,0);

    // length are same in both strings
    if (s1.length()!=s2.length())
    {
      return false;
    }
    
    // storing freq of character at strings
    for (int i = 0; i < s1.length(); i++)
    {
       freq[s1[i]-'a']++;  // for s1, we incrementing the freq of char.
       freq[s2[i]-'a']--;  // for s2, we decrementing the freq of char.
    }

    // checking if freq of every char is 0
    for (int i = 0; i < 26; i++)
    {
       if (freq[i]!=0)
       {
        return false;
       }
       
    }
    
    return true;
}
int main(){

    string s1, s2;
    cin>>s1>>s2;

    if (IsAnamgram(s1,s2))
    {
        cout<<"strings are anagram";
    }
    else
    {
        cout<<"strings are not anagrams ";
    }
    
    

return 0;
}