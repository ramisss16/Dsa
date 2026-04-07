#include<bits/stdc++.h>
using namespace std;

void insertAtbottom(stack<int> &st, int x){
    stack<int> temp;
    while (not st.empty())
    {
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);  // this is the point where x is inserted at bottom
    while (not temp.empty())
    {
       int curr = temp.top();
       temp.pop();
       st.push(curr);
    }   
}

// recursive
void f(stack<int> &st, int x){
    if (st.empty())
    {
        st.push(x);
        return;
    }

    int curr = st.top();
    st.pop();
    f(st,x);
    st.push(curr);
    
}
int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    // insertAtbottom(st, 100);

    // recursive
    f(st, 100);

     while (not st.empty())
    {
        int curr = st.top();
         st.pop();
        cout<<curr<<endl;
    }
return 0;
}