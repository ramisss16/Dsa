// Rotate the given array 'a' by k steps where k is non-negative .
// note - k can be greater then n as well where n is the size of array 'a'.

// array = {1,2,3,4,5}
// rotate 1 - {5,1,2,3,4}
// rotate 2 - {4,5,1,2,3}
// rotate 3 - {3,4,5,1,2} 
// rotate 4 - {2,3,4,5,1}
// rotate 5 - {1,2,3,4,5}
// rotate 6 - {5,1,2,3,4}
// 5 position me original array aa gya 
// 6%5 = 1 - {5,1,2,3,4}
// 7%5 = 2 - {4,5,1,2,3}
// 24%5 = 2 - {2,3,4,5,1}

// #include<iostream>
// using namespace std;

// int main() {
//    int array [] = {1,2,3,4,5};
//    int k =2;
//    int size = 5;
//    // k can be greater then size
//    k=k%size;
   
//    int ansarray[5]; // yha hmne alag array bnake extra memory used kiye hai
//    int j = 0;
//    // inserting last k element in ans array
//    for (int i = size-k; i  < size; i++)
//    {
//     ansarray[j++]=array[i];
//    }

//    // inserting first n-k element in nas array
//    for (int i = 0; i <= k; i++)
//    {
//     ansarray[j++]=array[i];
//    }

//    for (int i = 0; i < size; i++)
//    {
//     cout<<ansarray[i]<<"  ";
//    }
   
//    cout<<endl;
   
//     return 0;
// }
 

 // -> we can done this que. without using extra memory by using reverse method 
 // reverse method -> reverse (v.begin(),v.endl)
 // array = {1,2,3,4,5} -> aftre reversing --> {5,4,3,2,1}--> we reverse the only 4,5 element using reverse method and the reverse the 3,2,1 
 // element the we got the ans -->{4,5,1,2,3}
 
#include<iostream>
#include<vector>
#include <algorithm> // for reverse
using namespace std;

int main() {
    vector<int>v = {1,2,3,4,5};
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    int k=2;
    k=k%v.size();

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    // for each loop
    for(int a:v){
        cout<<a<<"  ";
    }
    cout<<endl;
    return 0;
}