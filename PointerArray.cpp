
// lecture no. 25

// #include<iostream>
// using namespace std;

// int main() {
//     int arr[3] = {16,12,6};
//     int *ptr = &arr[0];
//     int n = 3;

//     cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<"\n";

//     cout<<(arr+0)<<" "<<(arr+1)<<" "<<(arr+2)<<" "<<"\n";
//     cout<<*(arr+0)<<" "<<*(arr+1)<<" "<<*(arr+2)<<" "<<"\n";

//     for (int i = 0; i < n; i++)
//     {
//        cout<<*(arr+i)<<" "<<"\n";
//     }
    


//     return 0;
// }

// #include<iostream>
// using namespace std;

// void procees(int *arr , int n){
//     // inside this function we have the access of the same array in the main
//     for (int i = 0; i < n; i++)
//     {
//         cout<<*(arr+i)<<"\n";
//     }
    
// }
// int main() {
//     int arr[5] = {4, 8, 5, 9};
    
//     procees(arr , 5);

//     return 0;
// }

#include<iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    int *ptr = (arr + 2);
    cout<<*ptr<<endl;
    *ptr++;
    cout<<*ptr<<endl;
    *ptr--;
    cout<<*ptr<<endl;
    


    return 0;
}