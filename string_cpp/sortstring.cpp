#include<bits/stdc++.h>
#include<vector>
using namespace std;

string countsort (string str){

    vector<int> freq(26,0);

    // storing freq. at every character in string
    for(int i =0; i<str.length(); i++){
        int index = str[i]-'a';
        freq[index]++;
    }

    // sort our string
    int j = 0;
    for (int i = 0; i < 26; i++)
    {
        while (freq[i]--)
        {
           str[j++]=i+'a';
        }
        
    }
    return str;
    

}
int main(){
    string str;
    getline(cin,str);

    cout<<countsort(str)<<endl;


return 0;
}