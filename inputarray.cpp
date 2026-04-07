// taking inputs in array
#include <iostream>
using namespace std;

int main() {
    char vowel[5];

    // cout << "Enter 5 vowels: ";
    // for (int i = 0; i < 5; i++) {
    //     cin >> vowel[i];
    // }

    // cout << "Vowels entered are:\n";
    // for (int i = 0; i < 5; i++) {
    //     cout << vowel[i] << endl;
    // }

   
//   //for each loop
  for(char &ele: vowel){
    cin>>ele;
  }
   for (int i = 0; i < 5; i++)
  {
    cout<<vowel[i]<<"  "<<endl;
  }


  
  
    return 0;
}