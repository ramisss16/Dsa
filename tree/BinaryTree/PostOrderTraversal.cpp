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

void PostOrdertraversal(Node* Rootnode){
    // base case
    if(Rootnode == NULL){
        return;
    }

   
    // recursive call
    PostOrdertraversal(Rootnode->left);
    PostOrdertraversal(Rootnode->right);
    cout<<Rootnode->value<<" ";
}
int main(){

    Node* rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right  = new Node(11);

    PostOrdertraversal(rootNode);

return 0;
}