#include<bits/stdc++.h>
using namespace std;

template<typename T>
class node{
    public:
     T val;
     node*next;

     node(T data){
        val = data;
        next = NULL;
     }
};
int main(){

    node<int>* node1 = new node<int> (3);
    cout<<node1->val<<endl;

    node<char>* node2 = new node<char> ('a');
    cout<<node2->val<<endl;


return 0;
}