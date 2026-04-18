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

// searching -> recursive case
bool SearchBST(Node* root, int key){
    
    // base case
    if(root == NULL){
        return false;
    }

    if(root->value == key){
        return true;
    }

    // recursive case
    if(root->value > key){
        return SearchBST(root->left, key);
    }

    if(root->value < key){
        return SearchBST(root->right, key);
    }
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
    cout<<endl;
    cout<<SearchBST(bst1.root, 4)<<endl;
return 0;
}