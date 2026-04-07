#include<bits/stdc++.h>
using namespace std;

bool canPlaceQueen(int row, int col, vector<vector<char >> &grid){
     // is sameone is attaching from vetical up 
     // ham uper hi check krenge becouse ham uper se place krte aa rhe hai niche koi queen place nhii hogi
     for(int i = row-1; i >= 0; i--){
        if(grid[i][col] == 'Q'){
            return false;
        }
     }

     // check for diagonal
     
     // -> for left side diagonal
     for(int i = row-1, j = col-1;  i>=0 && j>=0; i--, j--){
        if(grid[i][j] == 'Q'){
            return false;
        }
     }

     // -> for right diagonal
     // hear condition is change becouse we moved right size so we do check j is never go uot of size; 
     for(int i = row-1, j = col+1; i>=0 && j<grid.size(); i--, j++){
        if(grid[i][j] == 'Q'){
            return false;
        }
     }

     return true;  
}

void nqueen(int currRow, int n, vector<vector<char>> &grid){
    if(currRow == n){
        for(int i =0; i<n; i++){
            for(int j =0; j<n; j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"* * \n";
        return;     
    }

    for(int col =0; col<n; col++){
        // we will go to all the calls
        // lets check if we can place queen in currRow and currCol
        if(canPlaceQueen(currRow , col, grid)){
           grid[currRow][col] = 'Q';
           nqueen(currRow+1, n, grid);
           grid[currRow][col] = '.';

        }
    }
}
int main(){
    
    int n = 4;
    vector<vector< char >> grid(n, vector<char>(n, '.'));

    nqueen(0, n, grid);


return 0;
}
