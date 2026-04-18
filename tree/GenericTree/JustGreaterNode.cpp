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

void JustGreaterNode(Node* root, int x, Node* &ans){

    // base case
    if(root == NULL){
        return;
    }

    if(root->data > x && (ans == NULL || root->data < ans->data)){
        // update ans
        ans = root;
    }

    // recursive call
    for(Node* child: root->children){
        JustGreaterNode(child, x, ans);
    }
 
}

int main(){

    Node* root = new Node(20);
    
    root->children.push_back(new Node(8));
    root->children.push_back(new Node(12));
   

    root->children[0]->children.push_back(new Node(4));
    root->children[0]->children.push_back(new Node(12));

    root->children[0]->children[1]->children.push_back(new Node(10));
    root->children[0]->children[1]->children.push_back(new Node(14));

    int x = 10;
    Node* ans = NULL;

    cout<<"ANS - ";
    JustGreaterNode(root, x, ans);
    if(ans == NULL) cout<<"NULL"<<endl;
    else cout<<ans->data<<endl;

return 0;
}