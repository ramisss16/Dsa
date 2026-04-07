#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *prev;
    node *next;

    node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLL
{
public:
    node *head;
    node *tail;

    DoublyLL()
    {
        head = NULL;
        tail = NULL;
    }

    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void inserAtstart(int val)
    {
        node *new_node = new node(val);

        if (head == NULL)
        { // checking if empty LL
            head = new_node;
            tail = new_node;
            return;
        }

        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
   
};

void deleteneighbournode(node* &head, node* &tail){
    node* currptr = tail->prev;  /// second last node
    while (currptr != head)
    {
       node* nextptr = currptr->next;
       node* prevptr = currptr->prev;
       if(nextptr->val == prevptr->val){
        //remove node
        nextptr->prev = prevptr;
        prevptr->next = nextptr;
        free(currptr);
       }
       currptr = prevptr;
    }
    
}
int main(){
DoublyLL dll;
dll.inserAtstart(1);
dll.inserAtstart(2);
dll.inserAtstart(1);
dll.inserAtstart(1);
dll.inserAtstart(2);
dll.display();
deleteneighbournode(dll.head,dll.tail);
dll.display();

return 0;
}