
// lecture no. - 38

#include<bits/stdc++.h>
using namespace std;

void selectionsort(char fruits[][60], int n){
    for (int i = 0; i < n-1; i++)
    {
        //finding the mini elemnet
        int min_index = i;
        for (int j = i+1; j < n; j++)
        {
           if(strcmp(fruits[min_index], fruits[j]) > 0){
            min_index =j;
           }
        }

        if(i!=min_index){
            swap(fruits[i], fruits[min_index]);
        }
        
    }
    return;
    
}
int main() {

    char fruits[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};

    int n = sizeof(fruits)/sizeof(fruits[0]);

    selectionsort(fruits, n);

    for (int i = 0; i < n; i++)
    {
        cout<<fruits[i]<<" ";
    }
    
    return 0;
}
