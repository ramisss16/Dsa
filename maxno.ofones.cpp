
// Given a boolean 2D array , where each row is sorted . find the row 
// with the max. no. of 1's
#include <iostream>
#include <vector>
using namespace std;
//second approach
int leftMostOneRow(vector<vector<int> > &V){

    int LeftMostOne = -1;
    int MaxOnesRow = -1;
    int j = V[0].size()-1;
   // findig leftmost one in 0th row
   //right to left
  while (j>=0 && V[0][j]==1)
  {
    LeftMostOne = j;
    MaxOnesRow = 0;
    j--;


  }

  //chech in rest of the rows if we can find a one left to the mostmostone
  for (int i = 1; i < V.size(); i++)
  {
    
   while (j>=0 && V[i][j]==1)
   {
    LeftMostOne = j;
    j--;
    MaxOnesRow = i;
   }
   
  }
  
  return MaxOnesRow;
   
}

int maximumOnesRow(vector<vector<int>> &V)
{

    int maxOnes = INT16_MIN;
    int maxOnesRow = -1;
    int column = V[0].size();

    for (int i = 0; i < V.size(); i++)
    {
        for (int j = 0; j < V[i].size(); j++)
        {
            if (V[i][j] == 1)
            {
                int numberofones = column - j;
                if (numberofones > maxOnes)
                {
                    maxOnes = numberofones;
                    maxOnesRow = i;
                }
                break;
            }
        }
    }
    return maxOnesRow;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> vec(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }

    int res = maximumOnesRow(vec);
    cout << res << endl;
    int res = leftMostOneRow(vec);
    cout << res << endl;

    return 0;
}