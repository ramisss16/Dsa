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

Node* LowestCommonAncestor(Node* root, Node* node1, Node* node2){

    // base case
    if(root == NULL){
        return NULL;
    }

    if(root->value > node1->value && root->value > node2->value){
        // lca will be in left side
        return LowestCommonAncestor(root->left, node1, node2);
    }

    if(root->value < node1->value && root->value < node2->value){
        // lca will be in right side
        return LowestCommonAncestor(root->right, node1, node2);
    }

    // if root value lies between node1 and node
    // or if root value if one of the node value
    return root;
}


int main(){

    BST bst1;
    bst1.root = insertBST(bst1.root, 3);
    insertBST(bst1.root, 1);
    insertBST(bst1.root, 4);
    insertBST(bst1.root, 6);
    insertBST(bst1.root, 2);

   Node* node1 = new Node(1);
   Node* node2 = new Node(2);

   Node* temp = LowestCommonAncestor(bst1.root, node1, node2);
   cout<<temp->value;
return 0;
}