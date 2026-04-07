#include<iostream>
using namespace std;
  
int f(int n){
    if (n<=9 and n>=0)  
    {
        /* code */
        return n;
    }
    return f(n/10) + (n%10);
}
int main() {
    int result = f(1234);
    cout<<result;

    return 0;
}