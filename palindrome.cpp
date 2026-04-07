
//  check given no. is palindrome or not
// ulta sidha pdho same hoga ex  12621 ---> L-R 12621
// R-L 12621
#include<iostream>
using namespace std;

bool f(int num, int *temp){
    if(num>=0 and num<=9){
         (*temp) /= 10;
        int LasrDigitofTemp = (*temp)%10;
        return(num = LasrDigitofTemp);

    }
    bool result = (f(num/10, temp) and (num%10)==((*temp)%10));

    
    (*temp) /= 10;
    return result;
}
int main() {
int num = 12621;
int anothernum = num;
int *temp = &anothernum;
cout<<f(num, temp);

    return 0;
}