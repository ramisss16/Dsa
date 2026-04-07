#include<bits/stdc++.h>
using namespace std;

class  Fruit{
    // public isliye access kr paye nhii to nhi pate 
   public:
    string name;
    string color;
};
int main(){

Fruit apple; // object
apple.name = "apple";
apple.color = "red";

cout<<apple.name<<"-"<<apple.color<<endl;

Fruit *mango = new Fruit(); // pointer object
mango->name = "mango";
mango->color = "yellow";
cout<<mango->name<<"-"<<mango->color<<endl;

return 0;
}