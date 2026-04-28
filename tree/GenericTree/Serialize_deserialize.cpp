#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    vector<Node*> children;

    Node(int data){
        this->data = data;
    }
};

void LevelOrderTraversal(Node* root){
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()){
        int size = q.size();

        while (size--){
            Node* curr = q.front();
            q.pop();

            cout << curr->data << " ";

            for(Node* child: curr->children){
                q.push(child);
            }
        }
        cout << endl;
    }
}

void serializeTree(Node* root, string &ans){
    if(!root) return;

    ans += to_string(root->data) + " : " + to_string(root->children.size()) + " : ";

    for(Node* child: root->children){
        ans += to_string(child->data) + " , ";
    }

    // remove last ", "
    if(!root->children.empty()){
        ans.pop_back();
        ans.pop_back();
    }

    ans += "\n";

    for(Node* child: root->children){
        serializeTree(child, ans);
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

    string ans = "";
    serializeTree(root, ans);

    cout << ans << endl;

    return 0;
}