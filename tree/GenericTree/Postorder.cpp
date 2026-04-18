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

void PostOrderTraversal(Node* root){

    // base case
    if(root == NULL){
        return;
    }

   
    // recursive call for child(L-R);
    for(Node* child: root->children){
        PostOrderTraversal(child);
    }

     // print root node first
    cout<<root->data<<" ";
}

int main(){

    Node* root = new Node('A');
    
    root->children.push_back(new Node('B'));
    root->children.push_back(new Node('C'));
    root->children.push_back(new Node('D'));

    root->children[0]->children.push_back(new Node('E'));
    root->children[0]->children.push_back(new Node('F'));

    root->children[2]->children.push_back(new Node('G'));

    PostOrderTraversal(root);

return 0;
}