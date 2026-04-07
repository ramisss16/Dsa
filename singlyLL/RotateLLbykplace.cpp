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

node* RotateLLByKplace(node* head , int k ){
     // step 1 - find lemgth of Ll
     int n = 0;
     // step 2 - find tail(last) node

     node* tail = head;
     while (tail->next)
     {
        n++ ; // counting lenth
       tail = tail->next;
     }
     n++; // for including last node(upper last node count nhi hoga)

     // tail poimtimg to last node 
     // counting k 
     k = k%n;
     if(k==0){
        return head;
     }

     tail->next = head;
     
     // traverse (n-k)th node
     node* temp = head;
     for (int i = 1; i < n-k; i++)
     {
        temp = temp->next;
     }
      // now temp pointing to (n-k)th node
      node* newhead = temp->next;
      temp->next =NULL;
      return newhead;
     
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

  ll.head = RotateLLByKplace(ll.head,3);
  ll.display();


return 0;
}