#include<bits/stdc++.h>
using namespace std;

// problem - find the middle ele of given LL  (slow fast pointer)

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

node* middleNode(node* &head){
    node* slow = head;
    node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
    
}
int main(){

    linkedList ll1;
    ll1.inserAttail(1);
    ll1.inserAttail(2);
    ll1.inserAttail(3);
    ll1.inserAttail(4);
    ll1.inserAttail(5);
    ll1.inserAttail(6);
    ll1.display();

    node* middle = middleNode(ll1.head);
    cout<<middle->val<<endl;



return 0;
}