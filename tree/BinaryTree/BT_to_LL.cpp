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

Node* last = NULL;

void flatten(Node* rootnode){
    
    if(rootnode == NULL) return;

    flatten(rootnode->right);
    flatten(rootnode->left);

    rootnode->right = last;
    rootnode->left = NULL;

    last = rootnode;
}

int main(){

    Node* rootNode = new Node(1);
    rootNode->left = new Node(2);
    rootNode->right = new Node(5);
    rootNode->left->left = new Node(3);
    rootNode->left->right = new Node(4);
    rootNode->right->right  = new Node(6);

    // Call flatten
    flatten(rootNode);

    // Print flattened tree
    Node* curr = rootNode;
    while(curr != NULL){
        cout << curr->value << "->";
        curr = curr->right;
    }

    return 0;
}