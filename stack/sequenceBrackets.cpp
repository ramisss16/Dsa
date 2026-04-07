
//  --> find the number of brackets that we need to remove to make the given bracket sequence balaced

#include<bits/stdc++.h>
using namespace std;

int NumOfBrackets(string str){
    stack<char>st;
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
       if (str[i] == '(')
       {
        st.push('c');
       }

       else{
        if(! st.empty()){
            st.pop();
        }
        else{
            count++;
        }
       }
       
    }
   return count; 
}

int main(){
 
    string str = "(())())))";
    cout<<NumOfBrackets(str)<<endl;


return 0;
}