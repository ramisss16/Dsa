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

void InOrdertraversal(Node* Rootnode){
    // base case
    if(Rootnode == NULL){
        return;
    }

   
    // recursive call
    InOrdertraversal(Rootnode->left);
     cout<<Rootnode->value<<" ";
    InOrdertraversal(Rootnode->right);
}
int main(){

    Node* rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right  = new Node(11);

    InOrdertraversal(rootNode);

return 0;
}