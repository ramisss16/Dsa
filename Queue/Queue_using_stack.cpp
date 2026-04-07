
// //----> push operation efficient----->///

// #include <bits/stdc++.h>
// using namespace std;

// class Queue {
//     stack<int> st;

// public:
//     Queue() {}

//     void push(int x) {  // queue.enqueue      time complexity = o(1)
//         this->st.push(x);
//     }

//     void pop() {    //   time complexity = o(n)
//         if (this->st.empty()) return;

//         stack<int> temp;
//         // move all elements except the bottom
//         while (this->st.size() > 1) {
//             temp.push(this->st.top());
//             this->st.pop();
//         }
//         // remove the bottom element (front of queue)
//         this->st.pop();

//         // move back to original stack
//         while (!temp.empty()) {
//             this->st.push(temp.top());
//             temp.pop();
//         }
//     }

//     bool isempty() {
//         return this->st.empty();
//     }

//     int front() {       //   time complexity = o(n)
//         if (this->st.empty()) return -1;

//         stack<int> temp;
//         while (this->st.size() > 1) {
//             temp.push(this->st.top());
//             this->st.pop();
//         }

//         // now st.top() is the "front" of the queue
//         int result = this->st.top();

//         // move elements back
//         while (!temp.empty()) {
//             this->st.push(temp.top());
//             temp.pop();
//         }
//         return result;
//     }
// };

// int main() {
//     Queue qu;
//     qu.push(10);
//     qu.push(20);
//     qu.push(30);
//     qu.push(40);
//     qu.pop();  // remove 10

//     while (!qu.isempty()) {
//         cout << qu.front() << " ";
//         qu.pop();
//     }
//     return 0;
// }



//----> pop operation efficient
#include <bits/stdc++.h>
using namespace std;

class Queue {
    stack<int> st;

public:
    Queue() {}

    void push(int x) {  // queue.enqueue      time complexity = o(n)

       stack<int>temp;
       while (not this->st.empty())
       {
        temp.push(this->st.top());
        this->st.pop();
       }
       this->st.push(x);

       while (not temp.empty())
       {
        this->st.push(temp.top());
        temp.pop();
       }
       
    }

    void pop() {    //   time complexity = o(1)
        if (this->st.empty()) return;
        this->st.pop();

    }

    bool isempty() {
        return this->st.empty();
    }

    int front() {       //   time complexity = o(1)
        if (this->st.empty()) return -1;
        return this->st.top();

    }
};

int main() {
    Queue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop();  // remove 10

    while (!qu.isempty()) {
        cout << qu.front() << " ";
        qu.pop();
    }
    return 0;
}
