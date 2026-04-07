#include<bits/stdc++.h>
using namespace std;

int main(){

queue<int> input;
input.push(10);
input.push(20);
input.push(30);
input.push(40);

stack<int> st;
// elemets push in stack from queueu
while (not input.empty())
{
    st.push(input.front());
    input.pop();

}

// elements push in queue from stack
while (not st.empty())
{
    input.push(st.top());
    st.pop();
}

// print ele
while (not input.empty())
{
   cout<<input.front()<<" ";
   input.pop();
}



return 0;
}