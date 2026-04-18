#include<bits/stdc++.h>
using namespace std;

class Node{
     public: 
         int value;
         Node* left;
         Node* right;

         Node(int v){
            value = v;
            left = right = NULL;
         }
};
int main(){

    Node* root = new Node(3);
    root->left = new Node(2);
    root->right = new Node(5);

    cout<<"Root node: "<<root->value<<endl;
    cout<<"left Node: "<<root->left->value<<endl;
    cout<<"right Node: "<<root->right->value<<endl;

return 0;
}