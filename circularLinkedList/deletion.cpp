#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int val;
    node *next;

    node(int data)
    {
        val = data;
        next = NULL;
    }
};

class circularLL
{

public:
    node *head;

    circularLL()
    {
        head = NULL;
    }

    void display()
    {
        node *temp = head;
        do
        {
            cout << temp->val << "->";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    void printcircular()
    {
        node *temp = head;
        for (int i = 0; i < 15; i++)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtfirst(int val)
    {
        node *new_node = new node(val);
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head; // circular LL
            return;
        }

        node *tail = head;
        while (tail->next != head) // time complexity = O(n) becouse of last node tak traverse kr rhe hai to change link
        {
            tail = tail->next;
        }

        // now tail ptr is pointing to  last node
        tail->next = new_node;
        new_node->next = head;
        head = new_node; // moved to head ptr to new_head
    }

    void deleteAtfirst(){
        if (head==NULL)
        {
          return;
        }

        node* temp = head;
        node* tail = head;
        while (tail->next != head )
        {
            tail = tail->next;
        }
        
        head = head->next;
        tail->next =  head;
        free(temp);
        
    }

    void deleteAtend(){
        if (head==NULL)
        {
          return;
        }

        node* tail = head;
        while (tail->next->next != head) // moving to second last node
        {
           tail = tail->next;
        }

        node* temp = tail->next;
        tail->next = head;        free(temp);

        
    }
  
};
int main()
{

    circularLL cll;
    cll.insertAtfirst(4);
    cll.insertAtfirst(3);
    cll.insertAtfirst(2);
    cll.insertAtfirst(1);
    cll.display();
    // cll.printcircular();

    cll.deleteAtend();
    cll.display();
  

    return 0;
}