#include<bits/stdc++.h>
using namespace std;

bool Knighttour(vector<vector<int>> &grid, int i, int j, int n, int cnt){
    
    // Boundary and visited check
    if(i < 0 || j < 0 || i >= n || j >= n || grid[i][j] != -1)
        return false;

    // Mark current cell
    grid[i][j] = cnt;

    // Base case
    if(cnt == n*n - 1){
        for(int x = 0; x < n; x++){
            for(int y = 0; y < n; y++){
                cout << grid[x][y] << "\t";
            }
            cout << endl;
        }
        return true;
    }

    // All 8 knight moves
    if(Knighttour(grid, i-1, j-2, n, cnt+1)) return true;
    if(Knighttour(grid, i-2, j-1, n, cnt+1)) return true;
    if(Knighttour(grid, i+1, j-2, n, cnt+1)) return true;
    if(Knighttour(grid, i+2, j-1, n, cnt+1)) return true;
    if(Knighttour(grid, i+1, j+2, n, cnt+1)) return true;
    if(Knighttour(grid, i+2, j+1, n, cnt+1)) return true;
    if(Knighttour(grid, i-1, j+2, n, cnt+1)) return true;
    if(Knighttour(grid, i-2, j+1, n, cnt+1)) return true;

    // Backtracking
    grid[i][j] = -1;
    return false;
}

int main(){
    int n = 6;
    vector<vector<int>> grid(n, vector<int>(n, -1));
    Knighttour(grid, 0, 0, n, 0);
    return 0;
}
