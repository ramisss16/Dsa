#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> KthClosestPoints(vector<pair<int, int>> &pts, int n, int k){

    // max heap
    priority_queue<pair<int, pair<int, int>>> pq;

    for(auto &pt : pts){

        int x = pt.first;
        int y = pt.second;

        int distance = x*x + y*y;

        pq.push({distance, pt});

        // keep only k closest points
        if(pq.size() > k){
            pq.pop();
        }
    }

    vector<pair<int, int>> ans(k);

    int i = k - 1;  // queue me dec order me store hai isliye ham revese save kr rhe hai

    while(!pq.empty()){

        ans[i] = pq.top().second;
        pq.pop();
        i--;
    }

    return ans;
}

int main(){

    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> pts(n);

    for(auto &pt : pts){
        cin >> pt.first >> pt.second;
    }

    vector<pair<int, int>> anspts = KthClosestPoints(pts, n, k);

    for(auto &pt : anspts){
        cout << pt.first << " " << pt.second << endl;
    }

    return 0;
}