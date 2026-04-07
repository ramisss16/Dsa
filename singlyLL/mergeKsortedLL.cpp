#include <bits/stdc++.h>
using namespace std;

// problem - merge the k linkedlist which is sorted

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

class linkedList
{
public:
    node *head;

    linkedList()
    { // initialize empty linked list
        head = NULL;
    }

    void inserAttail(int value)
    {
        node *new_node = new node(value);
        if (head == NULL)
        {
            head = new_node;
            return;
        }

        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    // no need to pass head in display becouse class ke ander hi hai to phle initilize ho chuka hai
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

node *mergetwosortedLL(node *&head1, node *&head2)
{

    node *dummyhead = new node(-1);

    node *ptr1 = head1;
    node *ptr2 = head2;
    node *ptr3 = dummyhead;

    while (ptr1 && ptr2)
    {
        if (ptr1->val < ptr2->val)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    if (ptr1)
    {
        ptr3->next = ptr1;
    }
    else
    {
        ptr3->next = ptr2;
    }

    return dummyhead->next;
}

node *mergeKSortedlinkedList(vector<node *> lists)
{
    if (lists.size() == 0)
    {
        return NULL;
    }

    while (lists.size() > 1)
    {
        node *mergeHead = mergetwosortedLL(lists[0], lists[1]); // yha ham do list pass kr rhe hai jisme phli dusri soted ho jayegi
                                                                // or merge head me store ho jayegi
        lists.push_back(mergeHead);  // now added new sorted LL to vector
        lists.erase(lists.begin());  // erase first list jo merge ho chuki hai
        lists.erase(lists.begin());  // erase second list jo merge ho chuki hai
    }
    return lists[0]; // last me vactor me only one list hi bachi hogi vo print ho jayegi
}


int main()
{

    linkedList ll1;
    ll1.inserAttail(1);
    ll1.inserAttail(7);
    ll1.inserAttail(8);
    ll1.display();

    linkedList ll2;
    ll2.inserAttail(2);
    ll2.inserAttail(4);
    ll2.inserAttail(5);
    ll2.display();

    linkedList ll3;
    ll3.inserAttail(3);
    ll3.inserAttail(6);
    ll3.display();

    vector<node*> lists;
    lists.push_back(ll1.head);
    lists.push_back(ll2.head);
    lists.push_back(ll3.head);

    linkedList mergeLL;
    mergeLL.head = mergeKSortedlinkedList(lists);
    mergeLL.display();

    return 0;
}