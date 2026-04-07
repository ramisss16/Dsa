#include<bits/stdc++.h>
using namespace std;

class shape {
    public:
     void add(int x, int y){

        int sum = x + y;
        cout<<sum<<endl;
     }

     void add(int x, int y, int z){
        int sum = x + y + z;
        cout<<sum<<endl;


     }

     void add (float x, float y){
        float sum = x + y;
        cout<<sum<<endl;
     }
};
int main(){

    shape s;
    s.add(2,3);
    s.add(1,2,3);
    s.add(float(1.1), float(1.2));

return 0;
}