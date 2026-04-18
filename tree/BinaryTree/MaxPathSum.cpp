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

int MaxPathSumHelper(Node* Rootnode, int &maxsum){

    if(Rootnode==NULL){
        return 0;
    }
   
    int leftmaxsum = max(0, MaxPathSumHelper(Rootnode->left, maxsum));
    int rightmaxsum = max(0, MaxPathSumHelper(Rootnode->right, maxsum));  // ham 0 se isliye kr rhe hai qki agar negative hua to ham consider nhii krenge isliye 0 se kr rhe hai 
                                                                          //  agar neg. higa to 0 max hoga or koi farak nhii pghega 0 se
    
    maxsum = max(maxsum, Rootnode->value + leftmaxsum + rightmaxsum);
    return Rootnode->value + max(leftmaxsum,rightmaxsum);

}

int MaxPathSum(Node* Rootnode){
 
   int maxsum =0;
   MaxPathSumHelper(Rootnode, maxsum);
   return maxsum;


}
int main(){

    Node* rootNode = new Node(20);
    rootNode->left = new Node(10);
    rootNode->right = new Node(5);


    cout<<MaxPathSum(rootNode);

  
return 0;
}