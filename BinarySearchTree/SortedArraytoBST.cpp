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


Node* ArrayToBST(vector<int> v, int start, int end){

    // base case
    if(start>end) return NULL;

    int mid =( start + end )/2;
    Node* root = new Node(v[mid]);

    // recursive case
    root->left = ArrayToBST(v, start, mid-1);  // recursively creating left subtree form left hlaf of array
    root->right = ArrayToBST(v, mid+1, end);   // recursively creating right subtree from right half of array
    return root;
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

    int n;
    cout<<"enter size of array :";
    cin>>n;

    vector<int>v(n);
    cout<<"enter ele of array: ";
    for(int i =0; i<n; i++){
        cin>>v[i];
    }

    BST bst;
    bst.root = ArrayToBST(v, 0, n-1);

    cout<<"preorder traversal: ";
    preorder(bst.root);

return 0;
}