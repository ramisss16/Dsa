#include<iostream>
using namespace std;

int main() {
 int arr[5];

 // taking input
 for(int &ele: arr){
    cin>>ele;
 }

 //print array
 for(int num:arr){
    cout<<num<<" ";
 }
    return 0;
}