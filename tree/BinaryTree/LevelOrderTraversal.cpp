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

void LevelOrderTraversal(Node* Rootnode){
    // base case
    if(Rootnode == NULL){
        return;
    }

    queue<Node*>q;
    q.push(Rootnode);

    while(!q.empty()){
        int nodeAtcurrentLevel = q.size();

        while ((nodeAtcurrentLevel--))
        {
           Node* currNode = q.front();
           q.pop();
           cout<<currNode->value<<" ";

           if(currNode->left){
            q.push(currNode->left);
           }

           if(currNode->right){
            q.push(currNode->right);
           }
        }
        
        cout<<endl;
    }
 
}
int main(){

    Node* rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right  = new Node(11);

    LevelOrderTraversal(rootNode);

return 0;
}