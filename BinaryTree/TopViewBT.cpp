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

vector<int> TopViewBinaryTree(Node* Rootnode){

    vector<int>ans;
    // base case
    if(Rootnode == NULL){
        return ans;
    }

  queue<pair<Node*, int>>q;
  q.push(make_pair(Rootnode, 0));
  map<int, int>m;

  while (!q.empty())
  {
    int NodeAtcurrLevel = q.size();

    while (NodeAtcurrLevel--)
    {
        pair<Node* ,int> p = q.front();
        Node* currNode = p.first;
        int currcol = p.second;
        q.pop();

        if(m.find(currcol)==m.end()){
            m[currcol] = currNode->value;
        }

        if(currNode->left){
            q.push(make_pair(currNode->left, currcol-1));
        }

        if(currNode->right){
            q.push(make_pair(currNode->right, currcol+1));
        }
    }
    
  }
  
  for(auto it : m){
    ans.push_back(it.second);
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

    vector<int> ans = TopViewBinaryTree(rootNode);

    for(auto i: ans){
        cout<<i<<" ";
    }

return 0;
}