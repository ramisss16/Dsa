#include<bits/stdc++.h>
using namespace std;

int KthLargestpoint(vector<int> &a, int n, int k){

    priority_queue<int, vector<int>, greater<int>>pq;

    for(auto &i: a){
       pq.push(i);
    }

    while(k--){
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        int product = first * second;
        pq.push(product);
    }

    // remove ele unit size = 1
    while (pq.size()>1)
    {
        pq.pop();
    }
    
    return pq.top();
}

int main(){

 int n , k;
    cin>> n>>k;

    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    cout<<KthLargestpoint(a, n , k);

return 0;
}