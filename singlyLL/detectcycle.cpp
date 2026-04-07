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

bool detectcycle(node* head){
    node* slow = head;
    node* fast = head;

    if (!head)
    {
        return false;
    }

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            cout<<slow->val<<endl;
            return true;
        }
        
    }

    return false; 

}

void removecycle(node* &head){  //assuming the LL has cycle
    node* slow = head;
    node* fast = head;

    do    // do while is liye use becouse initialy dono head se start ho rhe hai agar phle hi condtion check ho jati to loop end ho jata
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow!=fast);

    slow = head;

    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    fast->next = NULL;
}
int main(){

    linkedList ll1;
    ll1.inserAttail(1);
    ll1.inserAttail(2);
    ll1.inserAttail(3);
    ll1.inserAttail(4);
    ll1.inserAttail(5);
    ll1.inserAttail(6);
    ll1.inserAttail(7);
    ll1.inserAttail(8);
  
    ll1.head->next->next->next->next->next->next->next->next = ll1.head->next->next;  // cycle link kr diye 8 node next me 3 dal diye

    cout<<detectcycle(ll1.head)<<endl;
   removecycle(ll1.head);

   cout<<"after removing cycle"<<endl;

   cout<<detectcycle(ll1.head)<<endl;
   ll1.display();

  



return 0;
}