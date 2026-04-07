#include<bits/stdc++.h>
using namespace std;

int cal(int v1, int v2, char op){
    if(op=='*'){
        return v1*v2;
    }
    if(op=='+'){
        return v1+v2;
    }
    if (op == '/')
    {
        return v1/v2;
    }
    else{
       return v1-v2;
    }

}

int eval(string &str){
    stack<int> st;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (isdigit(ch))
        {
           st.push(ch-'0');  // digit ki value ascii form me store hogi isliye -0 taki original value store ho 
        }
        else{
            int v2 = st.top();
            st.pop();
            int v1 = st.top();
            st.pop();
            st.push(cal(v1, v2, ch));

        }
        
    }
    
    return st.top();
   
}
int main(){

    string str = "231*+9-";
    cout<<eval(str)<<endl;

return 0;
}