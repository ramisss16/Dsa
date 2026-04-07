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

      // no need no pass in display becouse class ke ander hi hai to phle initilize ho chuka hai
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

void deletalternate(node* &head){
    node * curr_node = head;
    while (curr_node!=NULL && curr_node->next!=NULL)
    {
       node* temp = curr_node->next; // this the node to be deleted
       curr_node->next = curr_node->next->next ;
       free(temp);
       curr_node = curr_node->next;
    }
    
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

  deletalternate(ll.head);
  ll.display();

return 0;
}