#include<iostream>
#include<vector>
using namespace std;

// Given a  matrix 'a' of diamemtion n*m and 2 coordinates (l1 , r1) and (l2,r2). retuen the sum of the rectangle from (l1,r1)
// to (l2,r2)

int rectanglesum(vector<vector<int>>matrix,int l1, int r1, int l2, int r2){
    int sum = 0;
    for (int i = l1; i <=  l2; i++)
    {
        /* code */
        for (int j = r1; j <= r2; j++)
        {
            /* code */
            sum+=matrix[i][j];
        }
        
    }
    return sum;
    
}

int main() {

    cout<<"enter n and m"<<endl;
    int n,m;
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            cin>>matrix[i][j];
        }
        
    }

    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
   int sum = rectanglesum(matrix,l1,r1,l2,r2);
   cout<<"sum:"<<sum<<endl;

    return 0;
}