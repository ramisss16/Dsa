#include<bits/stdc++.h>
using namespace std;

int main(){

priority_queue<int>pq1;  // max heap

pq1.push(4);
pq1.push(2);
pq1.push(10);
pq1.push(7);

cout<<"max heap"<<endl;
while(!pq1.empty()){    
    cout<<pq1.top()<<endl;
    pq1.pop();
    
}

priority_queue<int, vector<int>, greater <int>> pq2;  // min heap

pq2.push(4);
pq2.push(2);
pq2.push(10);
pq2.push(7);

cout<<"mix heap"<<endl;
while(!pq2.empty()){    
    cout<<pq2.top()<<endl;
    pq2.pop();
}

return 0;
}