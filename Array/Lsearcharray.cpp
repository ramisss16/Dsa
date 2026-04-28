// Lenear search if the element present in array or not then return -1 else return the inedx
// #include<iostream>
// using namespace std;

// int main() {
//  int array [] = {9,8,11,15,10};
//  int ele = 15;
//  int ans = -1;
//  int size = sizeof(array)/sizeof(array[0]);
//  for (int i = 0; i < size; i++)
//  {
//     if (array[i]=ele)
//     {
//         ans = i;
//     }
    
//  }
//  cout<<ans<<endl;
//     return 0;
// }

// Find the largets and second largets element in the given array (this is fo unique value )
// #include <iostream>
// using namespace std;

// int largestElementIndex(int array[], int size) {
//     int max = INT16_MIN; // Use INT16_MIN to initialize the max value
//     int maxindex = -1;   // Initialize maxindex as -1
//     for (int i = 0; i < size; i++) {
//         if (array[i] > max) {
// //             max = array[i]; // Update the maximum value
// //             maxindex = i;   // Update the index of the maximum value
// //         }
// //     }
// //     return maxindex;
// // }

// // int main() {
// //     int array[] = {2, 3, 5, 7, 6, 1};
    
// //     int indexoflargest = largestElementIndex(array, 6);
// //     cout << array[indexoflargest] << endl; // Print the largest element
// //     array[indexoflargest] = -1;            // Mark the largest element as -1
    
// //     int indexofsecondlargest = largestElementIndex(array, 6);
// //     cout << array[indexofsecondlargest] << endl; // Print the second largest element

// //     return 0;
// // }
// // if the array is similar type like{2,3,5,7,6,1,7} the firslagest ele is 7 the marked as -1 this print the 3 index no. ele. is print and mark -1
// // but again print second largest no. 7 becouse sirf 3 index walw me -1 marked hua the  so.resolve this problem here the code

// #include <iostream>
// using namespace std;

// int largestElementIndex(int array[], int size) {
//     int max = INT16_MIN; // Use INT16_MIN to initialize the max value
//     int maxindex = -1;   // Initialize maxindex as -1
//     for (int i = 0; i < size; i++) {
//         if (array[i] > max) {
//             max = array[i]; // Update the maximum value
//             maxindex = i;   // Update the index of the maximum value
//         }
//     }
//     return maxindex;
// }

// int main() {
//     int array[] = {2, 3, 5, 7, 6, 1,7};
    
//     int indexoflargest = largestElementIndex(array, 6);
//     cout << array[indexoflargest] << endl; // Print the largest element
//    int largestelement = array[indexoflargest];          // Mark the largest element as -1
//    for (int i = 0; i < 7; i++)
//    {
//     if (array[i]==largestelement)
//     {
//        array[i]=-1;
//     }
    
//    }
   
    
//     int indexofsecondlargest = largestElementIndex(array, 6);
//     cout << array[indexofsecondlargest] << endl; // Print the second largest element

//     return 0;
// }
// direct second largest elemet

#include<iostream>
using namespace std;

int secondLargestElement (int array[],int size){
    int max = INT8_MIN;
    int second_max = INT64_MIN;

    for (int i = 0; i < size; i++)
    {
       if (array[i]>max)
       {
       max = array[i];
       }
       
    }
    for (int i = 0; i <size; i++)
    {
        if (array[i]>second_max && array[i]!=max )
        {
            second_max = array[i];
        }
        
    }
    
    return second_max;

}

int main() {
    int array[] = {2,3,5,7,6,1,7};
    cout<<secondLargestElement(array,7)<<endl;

    return 0;
}