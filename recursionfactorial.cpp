#include<iostream>
using namespace std;

int fact(int n){
    if(n==1)
    return 1;
    return n*fact(n-1);
}

int main() {
//   int result =fact(4);
int a;
cout<<"Enter your no."<<endl;
cin>>a;
cout<<"the fictorial of "<<a<<" is:";
  cout<<fact(a)<<endl;
    return 0;
}