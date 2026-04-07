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

vector<int> ReverseLevelorder(Node* Rootnode){

    vector<int>ans;
    // base case
    if(Rootnode == NULL){
        return ans;
    }

  queue<Node*>q;
  stack<Node*>s;
  q.push(Rootnode);

  while (!q.empty())
  {
    int NodeAtcurrLevel = q.size();

    while (NodeAtcurrLevel--)
    {
        
        Node* currNode = q.front();
        q.pop();
        s.push(currNode);

        

        if(currNode->right){
          q.push(currNode->right);
        }

        if(currNode->left){
           q.push(currNode->left);
        }
    }
    
  }
  
  while(!s.empty()){
    ans.push_back(s.top()->value);
    s.pop();
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

    vector<int> ans = ReverseLevelorder(rootNode);

    for(auto i: ans){
        cout<<i<<" ";
    }

return 0;
}