#include<bits/stdc++.h>
using namespace std;

// problem - given the head of a LL ,  the head of LL , determine if the LL is palindrom or not

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

 bool Ispalindrom(node* &head){
    // step 1 - find midddle element
    node* slow = head;
    node* fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // now slow is pointing to the midd node
    // step 2 - breake LL into 2 parts
    node* curr = slow->next;
    node* prev = slow;
    slow->next = NULL;

    // step 3 - reverse the second half of a LL
    while (curr)
    {
       node* nextnode = curr->next;
       curr->next = prev;
       prev = curr;
       curr = nextnode;
    }

    // step 4 - compare both parts of LL 
    node* head1 = head;
    node* head2 = prev;
    while (head2)
    {
        if (head1->val != head2->val)
        {
           return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    
    return true;
    
 }
int main(){

    linkedList ll;



  ll.inserAttail(1);
  ll.inserAttail(2);
  ll.inserAttail(3);
  ll.inserAttail(3);
  ll.inserAttail(2);
  ll.inserAttail(1);

  ll.display();

  cout<<Ispalindrom(ll.head)<<endl;

return 0;
}