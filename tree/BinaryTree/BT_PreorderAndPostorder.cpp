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

    // Recursive helper function to build tree using preorder & postorder
    Node* buildTreeHelper(vector<int>& preorder, int prestart, int preend,
                          vector<int>& postorder, int poststart, int postend,
                          unordered_map<int,int> &postmp){

        // Base case: invalid range
        if(prestart > preend || poststart > postend){
            return NULL;
        }

        // Create root from preorder (first element is root)
        Node* Rootnode = new Node(preorder[prestart]);

        // If only one node, return it (leaf node)
        if(prestart == preend){
            return Rootnode;
        }

        // Next element in preorder is left child
        int leftchildvalue = preorder[prestart+1];

        // Find left child index in postorder
        int leftchildindex = postmp[leftchildvalue];

        // Size of left subtree
        int leftSize = leftchildindex - poststart + 1;

        // Build left subtree
        Rootnode->left = buildTreeHelper(preorder,
                                         prestart+1,
                                         prestart+leftSize,
                                         postorder,
                                         poststart,
                                         leftchildindex,
                                         postmp);

        // Build right subtree
        Rootnode->right = buildTreeHelper(preorder,
                                          prestart+leftSize+1,
                                          preend,
                                          postorder,
                                          leftchildindex+1,
                                          postend-1,   // ❗ exclude root of postorder
                                          postmp);

        return Rootnode;
    }

    // Main function to build tree
    Node* buildTree(vector<int>& preorder, vector<int>& postorder){
        unordered_map<int,int> postmp;  // map: value -> index in postorder

        // Fill map for quick lookup
        for(int i=0;i<postorder.size();i++){
            postmp[postorder[i]] = i;
        }

        // Call helper with full range
        return buildTreeHelper(preorder, 0, preorder.size()-1,
                               postorder, 0, postorder.size()-1, postmp);
    }
};

int main(){

    // Given preorder and postorder traversal
    vector<int> preorder = {1,2,4,5,3,6,7};
    vector<int> postorder = {4,5,2,6,7,3,1};

    solution sl;

    // Build the binary tree
    Node* root = sl.buildTree(preorder, postorder);

    cout << "Tree constructed successfully!" << endl;

    return 0;
}