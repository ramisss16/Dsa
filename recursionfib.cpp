#include<iostream>
using namespace std;

int fib(int n){
   
    if(n==0 or n==1){
        return n;

    }
    return fib(n-1) + fib(n-2);
}
int main() {
  int a;
  cout<<"enter your position"<<endl;
  cin>>a;
  cout<<"you fibonacci no at "<<a<<" position is:";
    cout<<fib(a)<<endl;

    return 0;
}