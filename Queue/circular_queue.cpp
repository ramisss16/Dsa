#include <bits/stdc++.h>
using namespace std;

class Queue {
    int front;
    int back;
    vector<int> v;
    int cs; // current size
    int ts; // total size

public:
    Queue(int n) {
        v.resize(n);
        this->cs = 0;
        this->ts = n;
        this->front = 0;
        this->back = n - 1;
    }

    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }
        this->back = (this->back + 1) % this->ts;
        this->v[this->back] = data;
        this->cs++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        this->front = (this->front + 1) % this->ts;
        this->cs--;
    }

    int getfront() {
        if (isEmpty()) return -1;
        return this->v[this->front];
    }

    bool isEmpty() {
        return this->cs == 0;
    }

    bool isFull() {
        return this->cs == this->ts;
    }
};

int main() {
    Queue qu(3);

    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.dequeue();     // remove 10
    qu.enqueue(40);   // insert 40 (circularly reused space)

    while (!qu.isEmpty()) {
        cout << qu.getfront() << " ";
        qu.dequeue();
    }

    return 0;
}
