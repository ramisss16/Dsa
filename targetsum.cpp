// // Find the total no.of pairs in the array whose sum is equal to the given value x
// #include<iostream>
// using namespace std;

// int main() {
//   int array[] = {3,4,6,7,1};
// //   int targetsum = 7;
// int targetsum;
// cout<< "Enter your value"<<endl;
// cin>>targetsum;
//   int size = sizeof(array)/sizeof(array[0]);

//   int pairs = 0;
//   for (int i = 0; i < size; i++)
//   {
//     for (int j = i+1; j <size; j++)
//     {
//        if (array[i]+array[j]==targetsum)
//        {
//         
//         pairs++;
//        }
       
//     }
    
//   }
//     cout<<"your no. of pairs is; "<<endl;
//   cout<<pairs<<endl;
  
//     return 0;
// }

// count no, of triplets whose sum is equal to the given value x
//for understanding loops go to the lecture no. 14
#include<iostream>
using namespace std;

int main() {
int array[] = {3,1,2,4,0,6};
int targetsum;
cout<< "Enter your value"<<endl;
cin>>targetsum;
int triplets = 0;
  int size = sizeof(array)/sizeof(array[0]);
  for (int i = 0; i < size; i++)
  {
    for (int j = i+1; j < size; j++)
    {
       for (int k = j+1; k < size; k++)
       {
        if (array[i]+array[j]+array[k]==targetsum)
        {
           
        triplets++;
        }
        
       }
       
    }
    
  }
   cout<<"your no. of pairs is; "<<endl;
   cout<<triplets<<endl;
    return 0;
}