#include <bits/stdc++.h>
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

    void deleteAtstart()
    {
        if (head == NULL)
        {
            return;
        }

        node *temp = head;
        head = head->next;
        if (head == NULL) // if LL has only one node
        {
            tail = NULL;
        }

        else
        {
            head->prev = NULL;
        }
        free(temp);
        return;
    }

    void DeleteAtend(){
        if(head==NULL){
            return;
        }

        node* temp = tail;
        tail = tail->prev;

        if (tail==NULL)
        {
           head == NULL;
        }
        else{
            tail->next = NULL;
        }
        free(temp);
        return;
        
    }

    void deleteAtposition(int k ){
        node* temp = head;
        int count = 1;
        while (count<k)
        {
            temp = temp->next;
            count++;
        }
        
        // now temp iss pointing to kth node
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        free(temp);
        return;
        
    }
};
int main()
{
    DoublyLL dll;
    dll.inserAtstart(1);
    dll.display();
    dll.inserAtstart(2);
    dll.display();
    dll.inserAtstart(3);
    dll.display();

    dll.deleteAtposition(2);
    dll.display();

    return 0;
}