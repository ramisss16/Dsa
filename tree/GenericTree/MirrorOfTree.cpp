#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
       
    int data;
    vector<Node*>children;

    Node(int data){
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

void MirrotTree(Node* root){
    // base case
    if(root == NULL){
        return;
    }

    // if node has 0 or 1 child it remain same 
   if(root->children.size() < 2){
    return;
   }

   reverse(root->children.begin(), root->children.end());
   for(Node* child: root->children){
     MirrotTree(child);
   }
}

int main(){

    Node* root = new Node(10);
    
    root->children.push_back(new Node(2));
    root->children.push_back(new Node(34));
    root->children.push_back(new Node(56));
    root->children.push_back(new Node(100));

    root->children[1]->children.push_back(new Node(1));

    root->children[3]->children.push_back(new Node(7));
    root->children[3]->children.push_back(new Node(8));
    root->children[3]->children.push_back(new Node(9));

    LevelOrderTraversal(root);
    MirrotTree(root);
    LevelOrderTraversal(root);

return 0;
}