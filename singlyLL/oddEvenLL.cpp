#include<bits/stdc++.h>
using namespace std;

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

node* oddevenLL(node* &head){
    
    // chaeck LL is empty
    if (!head)
    {
        return head;
    }

    node* evenhead = head->next;
    node* oddptr = head;
    node* evenptr = evenhead;
    
    while (evenptr && evenptr->next)
    {
        oddptr->next =  oddptr->next->next;
        evenptr->next =  evenptr->next->next;

        oddptr = oddptr->next;
        evenptr = evenptr->next;
    }

    // oddptr pointing to last oddd node
    oddptr->next = evenhead;
    return head;
    
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

   ll. head = oddevenLL(ll.head);
  ll.display();

return 0;
}