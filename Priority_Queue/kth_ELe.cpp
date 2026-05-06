#include<bits/stdc++.h>
using namespace std;

int KthLargestEle(vector<int>a, int n, int k){

    priority_queue<int, vector<int> , greater<int>> pq;

    for(int i=0; i<n; i++){
        pq.push(a[i]);
        if(pq.size()>k){
            pq.pop();
        }
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

    cout<<KthLargestEle(a, n , k);

return 0;
}