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

int pathsumhelper(Node* Rootnode, int targetsum, long int currsum,  unordered_map<long int, int>&pathcount){

    if(Rootnode==NULL){
        return 0;
    }

    currsum +=Rootnode->value;
    int anscount = pathcount[currsum-targetsum];

    pathcount[currsum]++;

    anscount += pathsumhelper(Rootnode->left, targetsum, currsum, pathcount) + pathsumhelper(Rootnode->right, targetsum, currsum, pathcount);

    pathcount[currsum]--;  // while backtracking

    return anscount;
}

int Pathsum(Node* Rootnode, int targetsum){
    unordered_map<long int, int>pathcount;
    pathcount[0]=1;
    return pathsumhelper(Rootnode, targetsum, 0, pathcount);

}
int main(){

    Node* rootNode = new Node(10);
    rootNode->left = new Node(5);
    rootNode->right = new Node(-3);
    rootNode->left->left = new Node(3);
    rootNode->left->right = new Node(2);
    rootNode->left->left->left = new Node(3);
    rootNode->left->left->right = new Node(-2);
     rootNode->left->right->right = new Node(1);
    rootNode->right->right  = new Node(11);

    cout<<Pathsum(rootNode, 8);

  
return 0;
}