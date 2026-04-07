#include<bits/stdc++.h>
using namespace std;

class node{
    public:
     int val;
     node * next;

     node(int data){
        val = data;
        next = NULL;
     }


};

// pass by reference becouse of changes krna hai
// insert at the start
void insertatHead(node* &head, int val){
    node* new_node = new node(val);
    new_node->next = head;
    head = new_node;

}

// insert at the end
void insertatLast(node* &head,int val){
    node* new_node = new node(val);
    node *temp = head;

    // travel start to end 
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    // temp reach the last node
    temp->next = new_node;
    // hme new ke next me NULL store krne ki jarurt nhi becouse hmne bydefoult
    // contructor me define kiye hai (next=NULL)
    
}

void insertatPosition(node* &head,int val, int pos ){

    if (pos == 0)
    {
       insertatHead(head,val);
       return;

    }

    node* new_node = new node(val);
    node* temp = head;
    int current_pos = 0;

    while (current_pos != pos-1)
    {
        temp = temp->next;
        current_pos++;
    }

    // temp reach the pos-1 node
    new_node->next = temp->next;
    temp->next = new_node;
    

    
}

void updateatPosition(node* &head, int val, int k){
    node* temp = head;
    int current_pos = 0;

    while (current_pos!=k)
    {
      
        temp = temp->next;
        current_pos++;
    }

    // now temp reach the kth node
    temp->val = val;
    
}


// no need to pass by reference becouse ham koi change nhi  kr rhe hai only 
// value print kr rhe hai 
void display(node* head){

    node* temp = head;
    while(temp!=NULL){
    cout<<temp->val<<"->";
    temp = temp->next;
    }
cout<<"NULL"<<endl;
}



int main(){

    node* head = NULL;
    insertatHead(head,2);
    display(head);
    insertatHead(head,1);
    display(head);
    insertatLast(head,3);
    display(head);
    insertatPosition(head, 4, 1);
    display(head);
    updateatPosition(head, 5 , 2);
    display(head);

return 0;
}