#include<bits/stdc++.h>
using namespace std;

string decodedstr(string str){
    string result = "";
    // treversing decoded string
    for (int i = 0; i < str.length(); i++)
    {
       if (str[i]!=']')
       {
         result.push_back(str[i]);
       }
       else
       {
        // extract str from result 
        string s = "";
        while ( !result.empty() && result.back()!='[')
        {
            s.push_back(result.back());
            result.pop_back();
        }
        
        // reversing the str
        reverse(s.begin(), s.end());

        // remove last char from result which is [
        result.pop_back();

        //extract num from result
        string num = "";
        while (!result.empty() && ( result.back() >= '0' && result.back() <= '9'))
        {
           num.push_back(result.back());
           result.pop_back(); 
        }
        // reversing num string
        reverse(num.begin(),num.end());

        // convert num string to int 
        int int_num = stoi(num);

        // inserting s in result int_num times
        while (int_num)
        {
          result+=s;
          int_num --;
        }
        

       }
       
    }
    return result;
    
}
int main(){

string str;
cin>>str;

cout<<decodedstr(str)<<endl;
return 0;
}