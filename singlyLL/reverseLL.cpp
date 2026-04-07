#include<bits/stdc++.h>
using namespace std;

// Given the head of a singly linked list, reverse the list and return the reverse list

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

node* reverseLL(node* &head){
    node* prevptr = NULL;
    node* currptr = head;

    while (currptr!=NULL)
    {
       node* nextptr = currptr->next;
       currptr->next = prevptr;
       // move all ptr to one step ahead
       prevptr = currptr;
       currptr = nextptr;
    }

    // now prevptr pointing to the new head node
    node* new_head = prevptr;
    return new_head;
    
}

// using recursion
node * reverseLLrecursion(node* &head){

    // base case 
    if(head == NULL || head->next == NULL){
        return head;
    }

   // recursive case
   node* new_head = reverseLLrecursion(head->next);
   head->next->next = head;
   head->next = NULL;
   return new_head;
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

//   ll. head = reverseLL(ll.head);
//   ll.display();
  ll. head = reverseLLrecursion(ll.head);
  ll.display();

return 0;
}