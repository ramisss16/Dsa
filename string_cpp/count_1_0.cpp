#include<bits/stdc++.h>
using namespace std;

int main(){

string str;
cout<<"inter you string: ";
cin>>str;

int count0 = 0, count1 = 0;
for(int i =0; i<str.size(); i++){
    if(str[i]=='0'){
        count0++;
    }else{
        count1++;
    }
}
 cout<<"count zeros - "<<count0<<endl;
 cout<<"count ones - "<<count1<<endl;
return 0;
}