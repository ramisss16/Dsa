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

// largest smaller value
Node* lergestNodeBST(Node* root){

    Node* curr = root;
    while (curr && curr->right != NULL)
    {
        curr = curr->right;
    }
    
    return curr;
}

// deletion 
Node* deleteBST(Node* root, int key){
    
    // base case
    if(root == NULL){
        return root;
    }

    if(root->value < key){
        root->right = deleteBST(root->right, key);
    }

    else if(root->value >key){
        root->left = deleteBST(root->left, key);
    }
    else{ // root == key that is to be dleted node
        
        // node has 0 child
        if(root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        }

        // root has 1 child
        else if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }

        // node has 2 child
        else{
            Node* justsmallernode = lergestNodeBST(root->left);
            root->value = justsmallernode->value;
            root->left = deleteBST(root->left, justsmallernode->value);
        }
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
    insertBST(bst1.root, 7);
    insertBST(bst1.root, 2);

    inorderbst(bst1.root);
    cout<<endl;
    
    bst1.root = deleteBST(bst1.root, 2);
      inorderbst(bst1.root);
    cout<<endl;

return 0;
}