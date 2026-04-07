#include<bits/stdc++.h>
using namespace std;

class parent {
public:
 int x;

 protected:
  int y;

private:
  int z;
    
};

class child1:public parent{
    // x will be public
    // y will be protected
    // z will be not accesible

};
class child2 :protected parent{
    //  x will be protected
    // y will remain protected
    // z will be not accessible

};

class child3:private parent{

    // x will  be private
    // y will be private 
    // z will inaccessible
};
int main(){


return 0;
}