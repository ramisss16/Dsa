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

void LevelOrderTraversal(Node* root){

    // base case
    if(root == NULL){
        return;
    }

    queue<Node*>q;
    q.push(root);
  
    while (!q.empty())
    {
        int nodesatcurrlevel = q.size();

        while (nodesatcurrlevel--)
        {
           Node* curr = q.front();
           q.pop();
           cout<<curr->data<<" ";

           for(Node* child: curr->children){
            q.push(child);
           }
        }
        cout<<endl;
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

    LevelOrderTraversal(root);

return 0;
}