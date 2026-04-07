
//Give a number n . find the sum of natural nos till n but with alternate sign that means if n=5 then you hava to return 1-2+3-4+5 = 3 as your ans 

#include<iostream>
using namespace std;

int f(int n){
    if(n==0) return 0;

     return f(n-1) + ((n%2== 0) ? (-n) : (n));
}
int main() {

    cout<<f(10)<<"\n";
    return 0;
}