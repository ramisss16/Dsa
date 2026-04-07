#include<bits/stdc++.h>
using namespace std;

bool canwego(int a, int b, vector<vector<int>> &grid ){
    return(a<grid.size() and  b<grid.size() and a>=0 and b>=0) and grid[a][b] == 1; 
}

// if we have not n*n matrix  then we need to find column no.
// bool canwego(int a, int b, vector<vector<int>> &grid ){
//     int n = grid.size();
//     int m = grid[0].size();         --> grid[0] se hame pehli row k ele milenge jisse ham colimn pta kr skte hai [1, 1, 1, 1]
//     return(a<n and  b<m and a>=0 and b>=0) and grid[a][b] == 1; 
// }

int f(int i, int j, vector<vector<int>> &grid){
    int n = grid.size();

    if(i == n-1 and j == n-1) return 1;

    int ans = 0;
    grid[i][j] = 2;

    if(canwego(i, j+1, grid))  // right
       ans += f(i , j+1, grid);

    if(canwego(i+1, j, grid))   // upward
       ans += f(i+1 , j, grid);
 
    if(canwego(i, j-1, grid))    // left
       ans += f(i , j-1, grid);

    if(canwego(i-1, j, grid))   // downward
       ans += f(i-1 , j, grid);

       grid[i][j] = 1;
       return ans;
}
int main(){

    vector<vector<int>> grid = {
        {1, 1, 1, 1},
        {0, 1, 0, 1},
        {0, 1, 1, 1},
        {0, 1, 1, 1}

    };

    int ans = f(0, 0, grid);
    cout<<ans<<
    
    
    endl;



return 0;
}