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

int getlength(node* head){
    node* temp = head;
    int length = 0;

    while (temp != NULL)
    {
      length++;
      temp = temp->next;
    }
    return length;
    
}

node* moveHeadBYk(node* head, int k){
    node* ptr = head;
    while (k--)  // jab tak k value k equal n ho 
    {
       ptr = ptr->next;
    }
    return ptr;
    
}

node* getintersection(node* head1, node* head2){
    // step1 - calculate lengths of LLs
    int l1 = getlength(head1);
    int l2 = getlength(head2);

    // step2 - find defference k between both LL and move longer LL ptr to k step
    node* ptr1, *ptr2;
    if(l1>l2){  //  LL1 is longer
        int k = l1-l2;
        ptr1 = moveHeadBYk(head1,k);
        ptr2 = head2;

    }
    else{  // LL2 is longer
        int k =l2 -l1;
        ptr1 = head1;
        ptr2 = moveHeadBYk(head2, k);

    }

    // step3 - compare ptr1 and ptr2
    while (ptr1) // jab tak ptr1 null nhi ho jata
    {
        if(ptr1 == ptr2){
            return ptr1;
        }

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

    }
    return NULL;
    

}
int main(){

    linkedList ll;
linkedList ll2;


  ll.inserAttail(1);
  ll.inserAttail(2);
  ll.inserAttail(3);
  ll.inserAttail(4);
  ll.inserAttail(5);

  ll.display();

 ll2.inserAttail(6);
  ll2.inserAttail(7);
  ll2.head->next->next  = ll.head->next->next->next;
 

  ll2.display();

  node* intersection = getintersection(ll.head, ll2.head);

  if (intersection)
  {
   cout<<intersection->val<<endl;
  }
  else{
    cout<<"-1";
  }


return 0;
}