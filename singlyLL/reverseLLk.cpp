#include<bits/stdc++.h>
using namespace std;

// Givem the head of a linked list, reverse the node of list k at  a time 
// and return the modified list 

class node {
    public:
      int val;
      node* next;

      node(int data){
        val = data;
        next = NULL;

      }
};

class linkedList{
    public: 
      node* head;

      linkedList(){  // initialize empty linked list
        head = NULL;
      }

      void inserAttail(int value){
        node* new_node = new node(value);
        if(head==NULL){
            head = new_node;
            return;
        }

        node *temp = head;
        while (temp->next!=NULL)
        {
           temp = temp->next;
        }
        temp->next = new_node;
        
      }

      // no need to pass head in display becouse class ke ander hi hai to phle initilize ho chuka hai
      void display(){
        node* temp = head;
        while (temp!=NULL)
        {
          cout<<temp->val<<"->";
          temp = temp->next;

        }
        cout<<"NULL"<<endl;
        
      }

};
node * reverseLLk(node* &head, int k){
    node* prevptr = NULL;
    node* currptr = head;

    int counter = 0; // for counting k node
    while (currptr != NULL && counter<k)
    {
        node* nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        counter++;
     }

     // recursive cal
     if (currptr != NULL)
     {
        node* new_head = reverseLLk(currptr, k);  // yha hmara first ele (head) currptr bnega
        head->next = new_head;
//          head 👉 current group ka original head

// Loop ke baad:

// ye node group ka LAST node ban chuka hota hai

// new_node 👉 next recursive call se aane wala head

// matlab next k nodes ka reversed head


// 👉 Current reversed group ke last node ko
// 👉 next reversed group ke head se connect karna

// First group reverse
// 2 → 1   3 → 4 → 5 → 6
// head = 1 (ab ye last node hai)

// Recursive call se new_node = 4
// Result:

// 2 → 1 → 4 → 3 → 6 → 5 → NULL
     }
     
     return prevptr;
    
}
int main(){

       linkedList ll;

  ll.inserAttail(1);
  ll.inserAttail(2);
  ll.inserAttail(3);
  ll.inserAttail(4);
  ll.inserAttail(5);
  ll.inserAttail(6);
  ll.display();

   ll. head = reverseLLk(ll.head,2);
  ll.display();


return 0;
}