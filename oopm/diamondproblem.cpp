#include<bits/stdc++.h>
using namespace std;

class parent{
    public:
     parent(){
        cout<<"parent class"<<endl;
     }
    
};

class child1:public parent{
    public:
      child1(){
        cout<<"child1 class"<<endl;
      }
};

class child2 : public parent{
    public:
      child2(){
        cout<<"child2 class"<<endl;
      }
};

class grandchild : public child1,public child2{
    public:
      grandchild(){
        cout<<"grandchild class"<<endl;
      }

};
// yha parent clas do bar call ho rhi h becouse of child1 and child 2
// it is solve by virtual func 
 
// #include <iostream>
// using namespace std;

// class A {
// public:
//     void show() {
//         cout << "Class A" << endl;
//     }
// };

// // Use virtual inheritance
// class B : virtual public A {};
// class C : virtual public A {};
// class D : public B, public C {};

// int main() {
//     D obj;
//     obj.show();   // ✅ Output: Class A
//     return 0;
// }

int main(){

    grandchild g;

return 0;
}