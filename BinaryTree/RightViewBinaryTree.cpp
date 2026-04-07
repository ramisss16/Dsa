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

vector<int> RightViewBinaryTree(Node* Rootnode){

    vector<int>ans;
    // base case
    if(Rootnode == NULL){
        return ans;
    }

    queue<Node*>q;
    q.push(Rootnode);

    while (!q.empty())
    {
       int nodesAtcurrent = q.size();

       while (nodesAtcurrent)
       {
        Node* currNode = q.front();
        q.pop();

        if(nodesAtcurrent == 1){
            ans.push_back(currNode->value);
        }

        if(currNode->left){
            q.push(currNode->left);
        }

        if(currNode->right){
            q.push(currNode->right);
        }
          
        nodesAtcurrent--;
       }
       
    }
    
    return ans;

 
}
int main(){

    Node* rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->left->right = new Node(12);
    rootNode->left->right = new Node(5);
    rootNode->right->right  = new Node(11);

    vector<int> ans = RightViewBinaryTree(rootNode);

    for(auto i: ans){
        cout<<i<<" ";
    }

return 0;
}