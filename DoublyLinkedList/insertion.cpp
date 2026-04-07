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

    void insertAtend(int val)
    {
        node *new_node = new node(val);

        if (tail == NULL)
        {
            tail = new_node;
            head = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }

    void insertAtposition(int val, int k){
        node* new_node = new node(val);
      
        node* temp = head;
        int count = 1;
        while (count<(k-1))
        {
            temp = temp->next;
            count++;
        }
        // now temp ponting to (k-1)th node
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev = temp;
        temp->next->prev = new_node;
        return;
        
    }
};
int main()
{
    DoublyLL dll;
    // dll.inserAtstart(1);
    // dll.display();
    // dll.inserAtstart(2);
    // dll.display();
    // dll.inserAtstart(3);
    // dll.display();

    dll.insertAtend(1);
    dll.display();
    dll.insertAtend(2);
    dll.display();
    dll.insertAtend(3);
    dll.display();


    dll.insertAtposition(4,3);
    dll.display();

    return 0;
}