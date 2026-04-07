
// Given a square matrix, turn it by 90 degrees in a clockwise 
// direction without using any extra space 
#include<iostream>
#include<vector>
#include<algorithm> //reqiured for reverse
using namespace std;

void rotateArray(vector<vector<int> > &vec){

    // Transpose
    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        // swaping only lower daigonal element isliye j<i becouse hme same matrix  mr kr rhe hai no ectra memory uses
      for (int j = 0; j < i ; j++)
      {
        swap(vec[i][j] , vec[i][j]);
      }
      
    }

    // Reverse every row
    for (int i = 0; i < n; i++)
    {
        reverse(vec[i].begin(),vec[i].end());
    }
    
    return;
}

int main() {
    int n;
    cout<<"enter the matrix form";
    cin>>n;

    vector<vector<int> > vec(n, vector<int> (n));
    
    cout<<"enter matrix"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            cin>>vec[i][j];
        }
        
    }
    rotateArray(vec);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}