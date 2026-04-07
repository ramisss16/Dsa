#include<iostream>
using namespace std;

int main() {
 float f = 10.2;
 int x = 10;
//  void pointer kisi bhi type ke data ko store kr leta hai
 void *ptr = &f;
 ptr = &x;
 // vvoid pointer can not be dereference
//  cout<<*ptr;
// type costing krna pdhta hai
int *integerpointer = (int *)ptr;
cout<<*integerpointer;
    return 0;
}