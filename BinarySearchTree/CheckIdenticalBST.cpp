#include<bits/stdc++.h>
using namespace std;

bool CheckIdenticalBSTHelper(vector<int> &v1, vector<int> &v2, int minvalue, int maxvalue){

    int i, j;

    // find first element in range in v1
    for(i = 0; i < v1.size(); i++){
        if(v1[i] > minvalue && v1[i] < maxvalue)
            break;
    }

    // find first element in range in v2
    for(j = 0; j < v2.size(); j++){
        if(v2[j] > minvalue && v2[j] < maxvalue)
            break;
    }

    // if no element found in both
    if(i == v1.size() && j == v2.size())
        return true;

    // if only one has element
    if((i == v1.size() && j != v2.size()) || (i != v1.size() && j == v2.size()))
        return false;

    // if values are different
    if(v1[i] != v2[j])
        return false;

    // check left and right subtree
    return CheckIdenticalBSTHelper(v1, v2, minvalue, v1[i]) &&
           CheckIdenticalBSTHelper(v1, v2, v1[i], maxvalue);
}

bool CheckIdenticalBST(vector<int> &v1, vector<int> &v2){
    return CheckIdenticalBSTHelper(v1, v2, INT_MIN, INT_MAX);
}

int main(){
    cout<<"enter arrays size: ";
    int n;
    cin>>n;

    vector<int> v1(n), v2(n);

    cout<<"enter array1: ";
    for(int i = 0; i < n; i++){
        cin>>v1[i];
    }

    cout<<"enter array2: ";
    for(int i = 0; i < n; i++){
        cin>>v2[i];
    }

    if(CheckIdenticalBST(v1,v2)){
        cout<<"arrays BST are identical"<<endl;
    }
    else{
        cout<<"arrays BST are not identical"<<endl;
    }

    return 0;
}