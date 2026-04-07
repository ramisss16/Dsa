#include<bits/stdc++.h>
using namespace std;

void combinationsum(vector<int> &c, int idx, int target,
                    vector<int> &v,
                    vector<vector<int>> &result) {
    
    if(target == 0){
        result.push_back(v);
        return;
    }

    if(idx >= c.size())
        return;

    // pick current element
    if(c[idx] <= target){
        v.push_back(c[idx]);
        combinationsum(c, idx+1, target - c[idx], v, result);
        v.pop_back();
    }

    // skip duplicates
    int j = idx + 1;
    while(j < c.size() && c[j] == c[idx])
        j++;

    // not pick
    combinationsum(c, j, target, v, result);
}

int main(){

    vector<int> arr = {2, 5, 2, 1, 2};
    int target = 5;

    sort(arr.begin(), arr.end());

    vector<vector<int>> result;
    vector<int> v;

    combinationsum(arr, 0, target, v, result);

    for(auto &vec : result){
        for(auto x : vec)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
