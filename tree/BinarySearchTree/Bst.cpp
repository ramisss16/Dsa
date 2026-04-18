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

class BST{

    public:
      Node* root;

      BST(){
        root = NULL;
      }
};

//  void insertBST(Node* &root, int val){

//     Node* newnode = new Node(val);
//     if(root == NULL){
//         root = newnode;
//         return;
//     }

//     Node* currnode = root;

//     while (true)
//     {
//         if(currnode->value > val){
//             if(currnode->left ==NULL){
//                 currnode->left = newnode;
//                 return;
//             }

//             currnode = currnode->left;

//         }  else{
//             if(currnode->right == NULL){
//                 currnode->right = newnode;
//                 return;
//             }

//             currnode = currnode->right;
//         }
//     }
    

// }

//recursive
Node* insertBST(Node* root, int val){
    // base case
    if(root == NULL){
        Node* newnode = new Node(val);
        return newnode;
    }

    // recursive case
    if(root->value > val){
        root->left = insertBST(root->left, val);
    }
    else if(root->value < val){
        root->right = insertBST(root->right, val);
    }

    return root;
}



void inorderbst(Node* root){
    if(root ==NULL) return;

    inorderbst(root->left);
    cout<<root->value<<" ";
    inorderbst(root->right);
}

int main(){

    BST bst1;
    bst1.root = insertBST(bst1.root, 3);
    insertBST(bst1.root, 1);
    insertBST(bst1.root, 4);

    inorderbst(bst1.root);
return 0;
}