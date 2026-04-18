#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
       
    char data;
    vector<Node*>children;

    Node(char data){
        this->data = data;
    }
};

void PreOrderTraversal(Node* root){

    // base case
    if(root == NULL){
        return;
    }

    // print root node first
    cout<<root->data<<" ";
    // recursive call for child(L-R);
    for(Node* child: root->children){
        PreOrderTraversal(child);
    }
    return;
}

int main(){

    Node* root = new Node('A');
    
    root->children.push_back(new Node('B'));
    root->children.push_back(new Node('C'));
    root->children.push_back(new Node('D'));

    root->children[0]->children.push_back(new Node('E'));
    root->children[0]->children.push_back(new Node('F'));

    root->children[2]->children.push_back(new Node('G'));

    PreOrderTraversal(root);

return 0;
}