#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main(){

    deque<int> qu;
    qu.push_back(10);
    qu.push_back(20);
    qu.push_back(30);
    qu.push_front(5);
    qu.push_front(0);

    while (not qu.empty())
    {
        cout<<qu.front()<<" ";
        qu.pop_front();
    }
    

return 0;
}