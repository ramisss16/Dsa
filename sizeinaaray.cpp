#include<iostream>
using namespace std;

int main() {
    int array[] = {1,2,3,4,5};
    cout<<sizeof(array)<<endl; //this gives the size of array that is 16
    cout<<sizeof(array)/sizeof(array[0])<<endl; //this gives the length of array(no.of elements)
    int size = sizeof(array)/sizeof(array[0]);

    // for loop
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<array[i]<<endl;
    // }

    // for each loop
    // for(int ele : array){
    //     cout<<ele<<endl;
    // }

    // while loop
    int index = 0;
    while (index<size)
    {
       cout<<array[index]<<endl;
       index++;
    
    }
    
    


    return 0;
}


// practice to print array

// #include<iostream>
// using namespace std;

// int main() {
// int arr[] = {1,2,3,4,5};
// int size = sizeof(arr)/sizeof(arr[0]);
// // for loop
// // for (int i = 0; i < size; i++)
// // {
// //     /* code */
// //     cout<<arr[i]<<" ";
// // }

// // gor each loop 
// // for(int ele: arr){
// //     cout<<ele<<" ";
// // }


// // for while loo
// int index = 0;
// while (index<size)
// {
//     /* code */
//     cout<<arr[index]<<" ";
//     index++;
// }

//     return 0;
// }