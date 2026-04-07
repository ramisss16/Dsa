#include<bits/stdc++.h>
using namespace std;

// problem - given the head of a linked list  , remove the kth node from the end of the list and return its head.

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

// assuming to be k is always less/equal to length of a list
void removeKthnodefromend(node* &head, int k)
{
    node* ptr1 = head;
    node* ptr2 = head;

    //move ptr2 k step ahead
    int count = k;
    while (count--)
    {
       ptr2 = ptr2->next;
    }

    while (ptr2 == NULL)  // if k is equal to length of LL
    {
       // head node to be deleted
       node* temp = head;
       head = head->next;
       free(head);
       return;
    }
    
    // now ptr2 is k step ahead to ptr1
    // when ptr2 is in NULL then ptr1 is to be deleted node
    // to hame deleted node se phle wale node ko next sea attached krna hai
    while (ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    // now ptr1 is pointing to before kth node
    // ptr1->nwxt node is deleted
    node* temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);
    
    


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

   removeKthnodefromend(ll.head, 3);
   ll.display();

return 0;
}