#include <bits/stdc++.h>
using namespace std;

bool Canweplace(vector<vector<char>> &grid, int row, int col, char num)
{

    // row check
    for (int j = 0; j < 9; j++)
        if (grid[row][j] == num)
            return false;

    // column check
    for (int i = 0; i < 9; i++)
        if (grid[i][col] == num)
            return false;

    // 3x3 box check
    int r = (row / 3) * 3;
    int c = (col / 3) * 3;

    for (int i = r; i < r + 3; i++)
        for (int j = c; j < c + 3; j++)
            if (grid[i][j] == num)
                return false;

    return true;
}

bool sudoku(vector<vector<char>> &grid, int row, int col)
{

    if (col == 9)
        return sudoku(grid, row + 1, 0);
    if (row == 9)
        return true;

    if (grid[row][col] == '.')
    {

        for (int num = 1; num <= 9; num++)
        {

            //  🧠 What does '0' + num mean?
            // In C++, characters are stored as ASCII values.
            // ASCII table (important part):
            // '0' → 48
            // '1' → 49
            // '2' → 50
            // ...
            // '9' → 57
            // So when you write:
            // '0' + num
            // you are doing:
            // ASCII of '0' + number
            // 🔍 Example
            // Case 1
            // num = 1;
            // char ch = '0' + num;
            // Internally:
            // 48 + 1 = 49
            // 49 → character '1'
            // ✅ Result:
            // ch = '1'
            // Case 2
            // num = 5;
            // 48 + 5 = 53
            // 53 → '5'

            char ch = '0' + num;

            if (Canweplace(grid, row, col, ch))
            {

                grid[row][col] = ch;

                if (sudoku(grid, row, col + 1))
                    return true;

                grid[row][col] = '.';
            }
        }
        return false;
    }
    else
    {
        return sudoku(grid, row, col + 1);
    }
}

int main()
{

    vector<vector<char>> grid = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    sudoku(grid, 0, 0);

    // for(auto &row : grid){
    //     for(char c : row)
    //         cout << c << " ";
    //     cout << endl;
    // }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}
