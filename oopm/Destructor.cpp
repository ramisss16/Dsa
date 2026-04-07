#include<bits/stdc++.h>
using namespace std;

class Ractangle{

 public:
    int l;
     int b;

    Ractangle(){  // defoult contaructor -> no argumnent pass
        l =0 ;
        b=0;

    }

    Ractangle(int x, int y){ // parameterized constructor -> argument pass
        l = x;
        b = y;

    }

    Ractangle(Ractangle &r){ // copy constructor -> initialize object by existing object
        l  = r.l;
        b = r.b;

    }
    ~ Ractangle(){ // destructor
        cout<<"destructor is creaetd"<<endl;

    }
};
int main(){
     Ractangle*r1 = new Ractangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1; // yha r1 delete hua to destructor called hua ye delete fun sirf pointer me hi use hota hai

    Ractangle r2(3,4);
    cout<<r2.l<<""<<r2.b<<endl;

    Ractangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;




return 0;
}