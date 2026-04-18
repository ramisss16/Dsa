// #include<bits/stdc++.h>
// using namespace std;

// class Node{

//     public:
//        int value;
//        Node* left;
//        Node* right;

//        Node(int v){
//         value = v;
//         left = right = NULL;
//        }
// };

// class BST{

//     public:
//       Node* root;

//       BST(){
//         root = NULL;
//       }
// };

// //  void insertBST(Node* &root, int val){

// //     Node* newnode = new Node(val);
// //     if(root == NULL){
// //         root = newnode;
// //         return;
// //     }

// //     Node* currnode = root;

// //     while (true)
// //     {
// //         if(currnode->value > val){
// //             if(currnode->left ==NULL){
// //                 currnode->left = newnode;
// //                 return;
// //             }

// //             currnode = currnode->left;

// //         }  else{
// //             if(currnode->right == NULL){
// //                 currnode->right = newnode;
// //                 return;
// //             }

// //             currnode = currnode->right;
// //         }
// //     }
    

// // }

// //recursive
// Node* insertBST(Node* root, int val){
//     // base case
//     if(root == NULL){
//         Node* newnode = new Node(val);
//         return newnode;
//     }

//     // recursive case
//     if(root->value > val){
//         root->left = insertBST(root->left, val);
//     }
//     else if(root->value < val){
//         root->right = insertBST(root->right, val);
//     }

//     return root;
// }

// bool IsBSTOrNot(Node* root, long min, long max){

//     // base case
//     if(root == NULL){
//         return true;
//     }

//     // 1 -> every node lies in its range
//     if(root->value <= min && root->value >= max){
//         return false;
//     }

//     // left and right subtree is BSt
//     return(IsBSTOrNot(root->left, min, root->value) && IsBSTOrNot(root->right, root->value, max));
// }


// int main(){

//     BST bst1;
//     bst1.root = insertBST(bst1.root, 4);
//     insertBST(bst1.root, 1);
//     insertBST(bst1.root, 2);
//     insertBST(bst1.root, 5);
//     insertBST(bst1.root, 3);

 
//   cout<<IsBSTOrNot(bst1.root, LONG_MIN, LONG_MAX);

  
// return 0;
// }


// second method using inorder traversal

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

class BST{

    public:
      Node* root;

      BST(){
        root = NULL;
      }
};

//  void insertBST(Node* &root, int val){

//     Node* newnode = new Node(val);
//     if(root == NULL){
//         root = newnode;
//         return;
//     }

//     Node* currnode = root;

//     while (true)
//     {
//         if(currnode->value > val){
//             if(currnode->left ==NULL){
//                 currnode->left = newnode;
//                 return;
//             }

//             currnode = currnode->left;

//         }  else{
//             if(currnode->right == NULL){
//                 currnode->right = newnode;
//                 return;
//             }

//             currnode = currnode->right;
//         }
//     }
    

// }

//recursive
Node* insertBST(Node* root, int val){
    // base case
    if(root == NULL){
        Node* newnode = new Node(val);
        return newnode;
    }

    // recursive case
    if(root->value > val){
        root->left = insertBST(root->left, val);
    }
    else if(root->value < val){
        root->right = insertBST(root->right, val);
    }

    return root;
}

bool IsBSTOrNot(Node* root, Node* prev){

    // base case
    if(root == NULL){
        return true;
    }

    // for left subtree
    if(!IsBSTOrNot(root->left, prev)){
        return false;
    }
    
    // for root node
    if(prev != NULL && root->value <= prev->value){
        return false;
    }

    prev;

    return IsBSTOrNot(root->right, prev);
}

int main(){

    BST bst1;
    bst1.root = insertBST(bst1.root, 4);
    insertBST(bst1.root, 1);
    insertBST(bst1.root, 2);
    insertBST(bst1.root, 5);
    insertBST(bst1.root, 3);

 Node* prev = NULL;
  cout<<IsBSTOrNot(bst1.root, prev);

  
return 0;
}