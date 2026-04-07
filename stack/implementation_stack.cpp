
// // ---> implemtaion of stack using Array

// #include <bits/stdc++.h>
// using namespace std;

// class Stack
// {
//     int capacity;
//     int *arr;
//     int top;

// public:
//     Stack(int c)
//     {
//         this->capacity = c;
//         arr = new int[c];
//         this->top = -1;
//     }

//     void push(int data)
//     {
//         if (this->top == this->capacity - 1)
//         {
//             cout << "overflow\n";
//             return;
//         }
//         this->top++;
//         this->arr[this->top] = data;
//         cout << data << " pushed\n";
//     }

//     int pop()
//     {
//         if (this->top == -1)
//         {
//             cout << "underflow\n";
//             return INT32_MIN;
//         }
//         this->top--;
//     }

//     int gettop()
//     {
//         if (this->top == -1)
//         {
//             cout << "underflow\n";
//             return INT32_MIN;
//         }
//         return this->arr[this->top];
//     }

//     bool isEmpty(){
//         return this->top == -1;
//     }

//      int size(){
//         return this->top+1;
//      }

//      int isfull(){
//         return this->top == this->capacity-1;
//      }
// };

// int main()
// {
//     Stack st(5);
//     st.push(1);
//     st.push(2);
//     st.push(3);
 
//    cout<< st.gettop()<<"\n";

//    st.pop();
//    st.push(4);
//    cout<< st.isEmpty()<<endl;


//     return 0;
// }


/// ---> stack using linked list

// #include<bits/stdc++.h>
// using namespace std;

// class Node{

//     public:
//       int data;
//       Node* next;
       
//       Node(int d){
//         this->data = d;
//         this->next = NULL;

//       }
// };

// class Stack{

//     Node* head;
//     int capacity;
//     int currsize;

//     public:
//        Stack(int c){
//         this-> capacity = c;
//         this->currsize =  0;
//         head = NULL;

//        }

//        bool isEmpty(){
//         return  this->head == NULL;

//        }

//        bool Isfull(){
//         return this->currsize == this->capacity;
//        }


//        void push(int data){
//         if(this->currsize == this->capacity){
//             cout<<"underflow\n";
//             return;
//         }

//         Node* new_node = new Node(data);
//         new_node->next = this->head;
//         this->head = new_node;
//         this-> currsize++;

//        }

//        int pop(){
//         if(this->head == NULL){
//             cout<<"underflow\n";
//             return INT_MIN;
//         }

//         Node* new_head = this->head->next;
//         this->head->next =  NULL;
//         Node* tobedellted = this->head;
//         int result = tobedellted->data;
//         delete tobedellted;
//         this->head = new_head;
//         return result;
//        }

//        int size(){
//         return this->currsize;
//        }

//        int gettop(){

//         if(this->head == NULL){
//             cout<<"underflow\n";
//             return INT_MIN;
//         }
//         return this->head->data;
//        }
// };
// int main(){

//     Stack st(5);
//     st.push(1);
//     st.push(2);
//     st.push(3);
 
//    cout<< st.gettop()<<"\n";

//    st.pop();
//    st.pop();
//    st.pop();
  
   
// //    st.push(4);
//    cout<< st.isEmpty()<<endl;

// return 0;
// }


/// ----> stack in cpp

#include<bits/stdc++.h>
using namespace std;

int main(){

stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
cout<<st.top()<<endl;
st.push(5);
st.pop();
st.pop();
cout<<st.empty()<<endl;
cout<<st.top()<<endl;

return 0;
}
