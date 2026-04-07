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

int SumOfLeafNode(Node* Rootnode){
    // base case
    if(Rootnode == NULL){
        return 0;
    }

     if(Rootnode->left == NULL && Rootnode->right == NULL){
        return 1;  // leaf node
     }

     // recursive
     int leftLeafNode = SumOfLeafNode(Rootnode->left);
     int rightLeafNode = SumOfLeafNode(Rootnode->right);
 
     return leftLeafNode + rightLeafNode;
}
int main(){

    Node* rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right  = new Node(11);

    cout<<SumOfLeafNode(rootNode);

return 0;
}