#include<bits/stdc++.h>
using namespace std;

// problem - given two sorted LL , merge them into 1 singly LL such that the resulting LL is also sorted

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

node* mergetwosortedLL(node* &head1, node* &head2){

    node* dummyhead = new node(-1);

    node* ptr1 = head1;
    node* ptr2 = head2;
    node* ptr3 = dummyhead;

    while (ptr1 && ptr2)
    {
        if(ptr1->val < ptr2->val){
            ptr3-> next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    if (ptr1)
    {
       ptr3->next = ptr1;
       
    }
    else{
        ptr3->next = ptr2;
        
    }
    
    return dummyhead->next;
    

}
int main(){

    linkedList ll1;
    ll1.inserAttail(1);
    ll1.inserAttail(4);
    ll1.inserAttail(5);
    ll1.display();

    linkedList ll2;
    ll2.inserAttail(2);
    ll2.inserAttail(3);
    ll2.display();

    linkedList ll3;
    ll3.head = mergetwosortedLL(ll1.head, ll2.head);
    ll3.display();

return 0;
}