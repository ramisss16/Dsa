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

void PreSuccBST(Node* root, Node* &pre, Node* &succ, int key){

    // base case
    if(root == NULL){
        return;
    }

    // condition 1
    if(root->value == key){
        // pre -> right most node in left subtree
        if(root->left != NULL){
            Node* temp = root->left;
            while (temp->right != NULL)
            {
                temp = temp->right;
            }
            pre = temp;
        }
        // secc -> left most node in right subtree
          if(root->right != NULL){
            Node* temp = root->right;
            while (temp->left != NULL)
            {
                temp = temp->left;
            }
            succ = temp;
        }
        return;
    }

    // condition 2
    if(root->value < key){
        pre = root;
        PreSuccBST(root->right, pre, succ, key);
    }

    // condition 3
    else if(root->value > key){
        succ = root;
         PreSuccBST(root->left,  pre, succ, key);
    }
}

int main(){

    BST bst1;
    bst1.root = insertBST(bst1.root, 3);
    insertBST(bst1.root, 1);
    insertBST(bst1.root, 4);
    insertBST(bst1.root, 6);
    insertBST(bst1.root, 2);
 
    Node* pre = NULL;
    Node* succ = NULL;

    PreSuccBST(bst1.root, pre, succ, 3);

    if(pre != NULL){
        cout<<"pre - "<<pre->value<<endl;
    }else{
        cout<<"pre - NULL"<<endl;
    }

    if(succ != NULL){
        cout<<"succ - "<<succ->value<<endl;
    }else{
        cout<<"succ - NULL"<<endl;
    }

return 0;
}