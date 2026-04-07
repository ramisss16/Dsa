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

int calculateTime(Node* startnode, unordered_map<Node*, Node*>& parent){

    unordered_set<Node*> infected;
    queue<Node*> q;
    q.push(startnode);
    infected.insert(startnode);

    int time = 0;

    while(!q.empty()){
        int currLevelNodes = q.size();
        bool infectFlag = false;

        while(currLevelNodes--){
            Node* currNode = q.front();
            q.pop();

            if(currNode->left && !infected.count(currNode->left)){
                infectFlag = true;
                infected.insert(currNode->left);
                q.push(currNode->left);
            }

            if(currNode->right && !infected.count(currNode->right)){
                infectFlag = true;
                infected.insert(currNode->right);
                q.push(currNode->right);
            }

            if(parent[currNode] && !infected.count(parent[currNode])){
                infectFlag = true;
                infected.insert(parent[currNode]);
                q.push(parent[currNode]);
            }
        }

        if(infectFlag) time++;
    }

    return time;
}

Node* makeparent(Node* rootnode, unordered_map<Node*, Node*>& parent, int start){
    queue<Node*> q;
    q.push(rootnode);

    Node* startnode = NULL; // ✅ FIXED

    while (!q.empty()){
        Node* currnode = q.front();
        q.pop();

        if(currnode->value == start){
            startnode = currnode;
        }

        if(currnode->left){
            parent[currnode->left] = currnode;
            q.push(currnode->left);
        }

        if(currnode->right){
            parent[currnode->right] = currnode;
            q.push(currnode->right);
        }
    }

    return startnode;
}

int amountoftime(Node* rootnode, int start){
    unordered_map<Node*, Node*> parent;

    Node* startnode = makeparent(rootnode, parent, start);

    if(startnode == NULL) return 0; // ✅ safety

    return calculateTime(startnode, parent);
}

int main(){

    Node* rootNode = new Node(1);
    rootNode->left = new Node(5);
    rootNode->right = new Node(3);
    rootNode->left->right = new Node(4);
    rootNode->left->right->right = new Node(2);
    rootNode->left->right->left = new Node(9);
    rootNode->right->right  = new Node(6);
    rootNode->right->left  = new Node(10);
    rootNode->right->right->right  = new Node(7);

    // ✅ Use valid start node
    cout << amountoftime(rootNode, 3);

    return 0;
}