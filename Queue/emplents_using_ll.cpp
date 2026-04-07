#include<bits/stdc++.h>
using namespace std;

class node{
   public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }

};

class Queue{
    node* head;
    node* tail;
    int size;

    public:
       Queue(){
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
       }

    //insert element at queue
    void enqueue(int data){
        node* new_node = new node(data);
        if (this->head == NULL)
        {
           // ll is empty
           this->head = this->tail = new_node;
        }
        else{
            this->tail->next = new_node;
            this->tail = new_node;
        }
         this->size++;
    }

    void dequeue(){
        if (this->head == NULL)
        {
          return; 
        }
        else{
            node* oldhead = this->head;
            node* newhead = this->head->next;
            this->head = newhead;
            if(this->head== NULL) this->tail = NULL;
            oldhead->next = NULL;
            delete oldhead;
            this->size--;
        }
    }

    int getsize(){
        return this->size;
    }

    bool isempty(){
        return this->head == NULL;
    }

    int front(){
        if(this->head ==NULL) return -1;
        return this->head->data;
    }
};
int main(){

  Queue qu;

  qu.enqueue(10);
  qu.enqueue(20);
  qu.enqueue(30);
  qu.dequeue();
  qu.enqueue(40);

  while (not qu.isempty())
  {
    cout<<qu.front()<<" ";
    qu.dequeue();
  }
  


return 0;
}