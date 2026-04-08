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

int maxdepth(Node* Rootnode){
    // base case
    if(Rootnode == NULL){
        return 0;
    }

    // recursive case
    int leftdepth = maxdepth(Rootnode->left);
    int rightdepth = maxdepth(Rootnode->right);

    return (max(leftdepth, rightdepth)+1);

  
}
int main(){

    Node* rootNode = new Node(2);                                 //         2
    rootNode->left = new Node(4);                                 //      4     10
    rootNode->right = new Node(10);                               //    6   5      11
    rootNode->left->left = new Node(6);                            //                 12
    rootNode->left->right = new Node(5);                          
    rootNode->right->right  = new Node(11);
    rootNode->right->right->right  = new Node(12);

    cout<<maxdepth(rootNode);

return 0;
}