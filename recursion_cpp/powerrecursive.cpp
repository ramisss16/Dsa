
//Given  to no. p & q find the value of using recursive function.

// #include<iostream>
// using namespace std;

// int f(int p, int q){
//     // if(q == 1) return p;
//     // return p * f(p, q-1);
// // both works same

//     if(q == 0) return 1;
//     return p * f(p, q-1);
// }
// int main() {

//     int result = f(2,3);
//     cout<<result;
//     return 0;
// }

// second approach

 #include<iostream>
 using namespace std;

 int f(int p, int q){
    if(q==0) return 1;
    if (q%2==0)
    {
        /* code */
        int result = f(p,q/2);
        return result * result;
    }
    else{
        int result = f(p, (q-1)/2);
        return p * result * result;
    }
    

 }
 
 int main() {
 
    int res = f(2,5);
    cout<<res;
     return 0;
 }