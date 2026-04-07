
//Given a number num and a value k, print k multiple of num


#include<iostream>
using namespace std;

void f(int num , int k){
   
if(k==0) return;

f(num, k-1);

cout<<(num*k)<<" ";
}
int main() {
f(5,8);
    return 0;
}