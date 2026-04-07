
//lecture n0. - 31 (problem on recursion)
// Given a no. is n. print if it is an armstrong no. or not


#include<iostream>
using namespace std;

// ye ak alg q hai power calculate krna 
int pow_recursive(int p, int q){
    if(q==0) return 1;
    if (q%2==0)
    {
        /* code */
        int result = pow_recursive(p,q/2);
        return result * result;
    }

    else{
        int result = pow_recursive(p, (q-1)/2);
        return p * result * result;
    }
    

 }

 int f(int n, int d){
    //base case 
    if(n==0) return 0;
    return pow_recursive(n%10,d)+f(n/10,d);
 }

int main() {
int n;
cout<<"Enter you no.";
cin>>n;

int no_of_digits = 0;
int temp = n;
while (temp>0)
{
    /* code */
    temp = temp/10;
    no_of_digits++;
}

int result = f(n,no_of_digits);
if (result==n)
{
    /* code */
    cout<<"yes";
}
else{
    cout<<"no";
}

    return 0;
}