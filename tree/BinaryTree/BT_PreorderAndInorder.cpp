#include<bits/stdc++.h>
using namespace std;

// Node class representing each node of the binary tree
class Node{
public:
    int value;        // value stored in node
    Node* left;       // pointer to left child
    Node* right;      // pointer to right child

    // constructor to initialize node
    Node(int v){
        value = v;
        left = right = NULL;  // initially children are NULL
    }
};

class solution{
public:

    // Recursive helper function to build tree
    Node* buildTreeHelper(vector<int>& preorder, int prestart, int preend,
                          vector<int>& inorder, int instart, int inend,
                          unordered_map<int,int> &inmp){

        // Base case: if range is invalid, return NULL (no node)
        if(prestart > preend || instart > inend){
            return NULL;
        }

        // First element in preorder is always root
        Node* Rootnode = new Node(preorder[prestart]);

        // Find index of root in inorder using map
        int rootIndex = inmp[Rootnode->value];

        // Number of nodes in left subtree
        int leftSize = rootIndex - instart;

        // Recursively build left subtree
        Rootnode->left = buildTreeHelper(preorder,
                                         prestart+1,                 // next element in preorder
                                         prestart+leftSize,          // range for left subtree
                                         inorder,
                                         instart,                    // start of inorder
                                         rootIndex-1,                // end of left subtree in inorder
                                         inmp);

        // Recursively build right subtree
        Rootnode->right = buildTreeHelper(preorder,
                                          prestart+leftSize+1,       // start of right subtree in preorder
                                          preend,
                                          inorder,
                                          rootIndex+1,               // start of right subtree in inorder
                                          inend,
                                          inmp);

        // return constructed root node
        return Rootnode;
    }

    // Main function to build tree
    Node* buildTree(vector<int>& preorder, vector<int>& inorder){
        unordered_map<int,int> inmp;  // map to store inorder value -> index

        // Fill the map for quick lookup
        for(int i=0;i<inorder.size();i++){
            inmp[inorder[i]] = i;
        }

        // Call helper function with full range
        return buildTreeHelper(preorder, 0, preorder.size()-1,
                               inorder, 0, inorder.size()-1, inmp);
    }
};

int main(){

    // Given preorder and inorder traversal
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};

    solution sl;

    // Build the binary tree
    Node* root = sl.buildTree(preorder, inorder);

    // Confirmation output
    cout << "Tree constructed successfully!" << endl;

    return 0;
}