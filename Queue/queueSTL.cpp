#include<bits/stdc++.h>
using namespace std;

int main(){

queue<int> qu;
qu.push(10); // enqueue
qu.push(20); 
qu.push(30); 
qu.push(30); 
qu.pop();

while (not qu.empty())
{
    cout<<qu.front()<<" ";
    qu.pop();

}


return 0;
}