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

Node* leafnodes(Node* root){

    // base case
    if(root == NULL){
        return NULL;
    }

    if(root->left == NULL && root->right == NULL){
        return NULL;  // left node to be deleted
    }

    // recursive case
    root->left = leafnodes(root->left);
    root->right = leafnodes(root->right);
}

void preorder(Node* root){

    // base case
    if(root == NULL){
        return;
    }

    // recursive case
    cout<<root->value<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){

    BST bst1;
    bst1.root = insertBST(bst1.root, 3);
    insertBST(bst1.root, 1);
    insertBST(bst1.root, 4);
    insertBST(bst1.root, 6);
    insertBST(bst1.root, 2);

    preorder(bst1.root);
    cout<<endl;
    bst1.root = leafnodes(bst1.root);
    preorder(bst1.root);

return 0;
}