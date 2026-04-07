#include <bits/stdc++.h>
using namespace std;

class minstack
{
public:
    stack<long long> st;
    long long mn;

    minstack()
    {
        this->mn;
    }

    void push(int val)
    {
        if (this->st.empty())
        {
            this->mn = val;
            this->st.push(val);
        }
        else
        {
            this->st.push(val - this->mn);
            if (this->mn > val)
            {
                this->mn = val;
            }
        }
    }
    void pop(){
        if (not this->st.empty())
        {
            if(this->st.top()>=0){
                this->st.pop();
            }
            else{
                this->mn = this->mn - st.top();
                this->st.pop();
            }
        }
        
    }

    int top(){
        if (this->st.top()==1)
        {
            return this->st.top();
        }
        else if(this->st.top()<0){
            return this->mn;
        }else{
            return this->mn + st.top();
        }
        
    }

    int getmin(){
        return this->mn;
    }
};
int main()
{
    minstack st1;
    st1.push(10);
    st1.push(5);
    st1.push(6);
    st1.push(12);
    st1.push(-1);
    st1.push(-5);

    cout<<st1.getmin()<<endl;
    cout<<st1.top()<<endl;
    st1.pop();
    cout<<st1.getmin()<<endl;
    st1.pop();
    cout<<st1.getmin()<<endl;
        cout<<st1.top()<<endl;


    return 0;
}