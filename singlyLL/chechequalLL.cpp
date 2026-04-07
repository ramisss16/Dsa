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

bool checkequalLL(node* head1, node* head2){
    node* ptr1 = head1;
     node* ptr2 = head2;

     while (ptr1 != NULL && ptr2 != NULL)
     {
        if(ptr1->val != ptr2->val){
            return false;
        }

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
     }

     // at this point either ptr1 is null or ptr2 is null or both are is null
     return(ptr1 == NULL && ptr2 == NULL);  // ye jab dono nal hoga tab hi  true hoga
     
}

int main(){
linkedList ll;
linkedList ll2;


  ll.inserAttail(1);
  ll.inserAttail(2);
  ll.inserAttail(3);
  ll.inserAttail(4);

  ll.display();

 ll2.inserAttail(1);
  ll2.inserAttail(2);
  ll2.inserAttail(3);
  ll2.inserAttail(4);

  ll2.display();

cout<<checkequalLL(ll.head, ll2.head)<<endl;

return 0;
}