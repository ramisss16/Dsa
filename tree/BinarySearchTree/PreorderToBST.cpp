#include <bits/stdc++.h>
using namespace std;

// Tree Node
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

// Helper function to build BST
TreeNode* buildTree(vector<int>& preorder, int preStart, int preEnd,
                    vector<int>& inorder, int inStart, int inEnd,
                    unordered_map<int, int>& mp) {

    // base case
    if (preStart > preEnd || inStart > inEnd)
        return NULL;

    // create root
    TreeNode* root = new TreeNode(preorder[preStart]);

    // find root index in inorder
    int inRoot = mp[preorder[preStart]];

    // elements in left subtree
    int numsLeft = inRoot - inStart;

    // build left subtree
    root->left = buildTree(preorder, preStart + 1, preStart + numsLeft,
                           inorder, inStart, inRoot - 1, mp);

    // build right subtree
    root->right = buildTree(preorder, preStart + numsLeft + 1, preEnd,
                            inorder, inRoot + 1, inEnd, mp);

    return root;
}

// Function to construct BST from preorder
TreeNode* bstFromPreorder(vector<int>& preorder) {

    vector<int> inorder = preorder;
    sort(inorder.begin(), inorder.end());

    unordered_map<int, int> mp;
    for (int i = 0; i < inorder.size(); i++) {
        mp[inorder[i]] = i;
    }

    return buildTree(preorder, 0, preorder.size() - 1,
                     inorder, 0, inorder.size() - 1, mp);
}

// Inorder Traversal (to verify output)
void inorderPrint(TreeNode* root) {
    if (root == NULL) return;

    inorderPrint(root->left);
    cout << root->val << " ";
    inorderPrint(root->right);
}

// Main function
int main() {

    vector<int> preorder = {10, 5, 3, 8, 20, 15, 25};

    TreeNode* root = bstFromPreorder(preorder);

    cout << "Inorder Traversal of BST: ";
    inorderPrint(root);

    return 0;
}