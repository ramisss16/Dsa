#include<bits/stdc++.h>
using namespace std;

class ABS{

    int x;

    public: 
      int set_data(int a){
        x=a;
      }
      int get_data(){
        return x;
      }
};
// yha ham x ko direct access nhi kr pate isliye fun bnake kiye ese hi incapsulation bolte hai
int main(){
  ABS obj1;
  obj1.set_data(3);
  cout<<obj1.get_data()<<endl;

return 0;
}