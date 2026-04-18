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

void InOrderTraversal(Node* root){

    // base case
    if(root == NULL){
        return;
    }

    int childnodes = root->children.size();
  // print recursive child node except last
  for(int i= 0; i<childnodes-1; i++){
    InOrderTraversal(root->children[i]);
  }

  // print root node
  cout<<root->data<<" ";

  // call for last child
  if(childnodes>0){
     InOrderTraversal(root->children[childnodes-1]);
  }
}

int main(){

    Node* root = new Node('A');
    
    root->children.push_back(new Node('B'));
    root->children.push_back(new Node('C'));
    root->children.push_back(new Node('D'));

    root->children[0]->children.push_back(new Node('E'));
    root->children[0]->children.push_back(new Node('F'));

    root->children[2]->children.push_back(new Node('G'));

    InOrderTraversal(root);

return 0;
}