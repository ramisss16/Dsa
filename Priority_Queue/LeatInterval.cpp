#include<bits/stdc++.h>
using namespace std;

int LeastInterval(vector<char> & task, int n){

    // 1: count freq. of task
    unordered_map<char, int>mp;
    for(auto t: task){
        mp[t]++;
    }

    // 2: insert freq. into max heap
    priority_queue<int>pq;
    for(auto t: mp){
        pq.push(t.second);
    }

    //3: finding time until pq is empty
    int totaltime = 0;

    while (!pq.empty())
    {
        vector<int>temp;
        // looping one yime frame = n+1 units of time
        for(int i=0; i<=n; i++){
           
            if(!pq.empty()){
                int freq = pq.top();
                pq.pop();

                if(freq>1){
                    temp.push_back(freq-1);  // adding remaining task in vector
                }
            }

            totaltime++;

            if(pq.empty() && temp.empty()){
                return totaltime;  // all tasks have been executed
            }
        }
       
        for(auto t:temp){
            pq.push(t);  // adding remaining task to pq from vector
        }
    }
    
    return totaltime;
}

int main(){

int n, countdown;
cin>>n>>countdown;

vector<char>v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}

int Least = LeastInterval(v,  countdown);

cout<<"the least interval is: "<<Least<<endl;

return 0;
}