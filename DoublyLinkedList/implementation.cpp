#include<bits/stdc++.h>
using namespace std;

class node{
    public:
     int val;
     node* prev;
     node* next;

     node(int data){
        val = data;
        prev = NULL;
        next = NULL;
     }
};

class DoublyLL{
    public:
      node* head;
      node* tail;

    DoublyLL(){
        head = NULL;
        tail = NULL;
    }
};
int main(){

    node* new_node = new node(3);

    DoublyLL ll;
    ll.head = new_node;
    ll.tail = new_node;

 cout<<ll.head->val<<endl;

return 0;
}