// sum of all element in the given array

#include<iostream>
using namespace std;

int main() {
//  int array[] = {1,2,3,4,5};
//  int size = sizeof(array)/sizeof(array[0]);
//  int sum = 0;
//  for (int i = 0; i < size; i++)
//  {
//     sum += array[i];

//  }
//  cout<<sum<<endl;

 //max value out of all the elements in the array

 int array [] = {3,7,18,9,20};
int size = sizeof(array)/sizeof(array[0]);
 int max = array[0];

 for (int i = 0; i < size; i++)
 {
   if (array[i]>max)
   {
    max = array[i];
   }
   
 }
 cout<<max<<endl;
 

 
    return 0;
}