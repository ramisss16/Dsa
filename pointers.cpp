
// call - by - refference using pointer

// #include<iostream>
// using namespace std;

// void swap(int *x, int *y){
//     // try to swap x and y
//     int temp = *x;
//     *x =*y;
//     *y = temp;
// }

// int main() {
//  int x = 10;
//  int y = 20;
//  int *ptr1 = &x;
//  int *ptr2 = &y;
//  swap(ptr1,ptr2);

//  cout<<x<<" "<<y;

//     return 0;
// }

// isme first a ka index and last a ka index no nikale hai

// #include<iostream>
// using namespace std;

// void FindFirstandLastIndex(string s, char ch, int *first, int *last){
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i]==ch)
//         {
//             *first = i;
//             break;
//         }
//         for (int i = s.size() -1; i >= 0; i--)
//         {
//            if (s[i]==ch)
//            {
//             *last = i;
//             break;
//            }
           
//         }
        
        
//     }
    
// }

// int main() {

//      string s = "aaabac";
//      char ch = 'a';
//      int first = -1;
//      int last = -1;

//      int *pf = &first;
//      int *pl = &last;

//      FindFirstandLastIndex(s,ch,pf,pl);

//      cout<<*pf<<" "<<*pl<<endl;
    
//   cout<<first<<" "<<last<<endl;


//     return 0;
// }


// yha size ke hisab se value bs rhi jese x me 4 size hai to 4 unit 
// and double me 8 size hai to 8 unit
// #include<iostream>
// using namespace std;

// int main() {
//  int x = 10;
//  double dec = 9.8;
//  int *ptr = &x;
//  double *ptrd = &dec;
// // size operater size btata hai
//  cout<<"size of x is :"<<sizeof(x)<<"\n";

//  cout<<"size of dec is :"<<sizeof(dec)<<"\n";

//  cout<<ptr<<" "<<(ptr +1)<<"\n";
//  cout<<ptrd<<" "<<(ptrd+2)<<" "<<(ptrd+3)<<" "<<(ptrd-1)<<"\n";




//     return 0;
// }

#include<iostream>
using namespace std;

int main() {

    int arr[2] ={5,8};
    int *ptr = &arr[0];
    // ye basically incresed hoga like 1 se 2
   // (*ptr)++;
   

   // ye index me change hoga like 5 to next elmenet 8
    *ptr++;
    cout<<*ptr;

    return 0;
}