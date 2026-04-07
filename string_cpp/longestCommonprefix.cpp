#include<bits/stdc++.h>
using namespace std;

/// --> another way
string longestCommonPrefix(vector<string> &str){

    // keeping first string as cons and comparing it with all other string
    string s1 = str[0];
    int ans_length = s1.size();

    for (int i = 0; i < s1.size(); i++)
    {
        int j = 0;
         while (j<s1.size() && j< str[i].size() &&  s1[j]==str[i][j])  // finding the coomon prefix length
         {
            j++;
           
         }
        ans_length  = min(ans_length,j); 
    }
    string ans = s1.substr(0,ans_length);
    return ans;

}
// string longestCommonPrefix(vector<string> &str){

//     // sort the array of string
//     sort(str.begin(),str.end());

//     string s1 = str[0]; // first string
//     int i = 0;
//     string s2 = str[str.size()-1]; //  last string
//     int j =0;

//     string ans = "";
//     while (i<s1.size() && j<s2.size())
//     {
//         if (s1[i]==s2[j])
//         {
//            ans+=s1[i];
//            i++,j++;
//         }
//         else{
//             break;
//         }

      
//     }
//     return ans;
// }
int main(){

    int n;
    cout<<"enter the no. of string: ";
    cin>>n;

    cout<<"enter strings"<<endl;
    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
    }
    
    cout<<"longest common prefix: "<<longestCommonPrefix(str)<<endl;

return 0;
}