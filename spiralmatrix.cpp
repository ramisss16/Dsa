// Given an m*n matyrix 'a' , return all elements of the matrix in spiral order

// #include<iostream>
// #include<vector>
// using namespace std;

// void spiralOrder(vector<vector <int> > &matrix){
    
//     int left = 0;
//     int right = matrix[0].size()-1; //no. of columns
//     int top = 0;
//     int bottom = matrix.size()-1; // no of rows

//     int direction = 0;

//     //  agar left and righ or top and bottom equal ho jayenge to puri matrix print ho jayegi
//     while (left<=right && top <= bottom)
//     {
      
//         // left -> right
//         if (direction==0)
//         {
//             for (int col = left; col <= right; col++)
//             {
//                 cout<<matrix[top][col]<<" ";
//             }

//             top++;
            
//         }
//         // top -> bottom 
//         else if (direction==1)
//         {
//             for (int row = top; row <= bottom; row++)
//             {
//                 cout<<matrix[row][right]<<" ";
//             }
//             right--;
//         }
//         // right-> left
//         else if (direction==2)
//         {
//             for (int col= right; col >=left; col--)
//             {
//                 cout<<matrix[bottom][col]<<" ";
//             }
//             bottom--;
            
//         }
//         //bottom -> top
//         else 
//         {
//             for (int row = bottom; row >= top; row--)
//             {
//                cout<<matrix[row][left]<<" ";
//             }
//             left++;
            
//         }
//         direction = (direction+1)%4;
//         // 0, 1, 2, 3  direction agar 4 hogi to firse modulo ki wajah se 0 ho jayegi
        
        
        
        
//     }
    
// }

// int main() {

//     int n , m;
//     cout<<"enter order of matrix";
//     cin>>n>>m;
//     vector<vector<int >>matrix(n, vector<int>(m));
     
//     cout<<"enter elemnet of matrix";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
           
//             cin>>matrix[i][j];
//         }
        
//     }
//     // for printing matrix
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout<<matrix[i][j]<<" ";
//         }cout<<endl;
        
//     }

//     spiralOrder(matrix);
    

//     return 0;
// }

//Given a positive integer n , generate an  n*n matrix 
// filled with element from 1 to n2 in spiral form
#include<iostream>
#include<vector>
using namespace std;

 vector < vector< int > > createSpiralMatrix(int n){

    vector<vector<int > > matrix(n, vector <int> (n));

    int left = 0;
    int right = n-1;
    int top = 0;
    int bottom = n-1;

    int direction = 0;
    // yha ham value de rhe  hai usme ham value ko print kr rhe the isme ham value ko insert kr rhe hai
    int value = 1;

        //  agar left and righ or top and bottom equal ho jayenge to puri matrix print ho jayegi
        while (left<=right && top <= bottom)
        {
          
            // left -> right
            if (direction==0)
            {
                for (int col = left; col <= right; col++)
                {
                    matrix[top][col] = value++;
                }
    
                top++;
                
            }
            // top -> bottom 
            else if (direction==1)
            {
                for (int row = top; row <= bottom; row++)
                {
                    matrix[row][right] = value++;
                }
                right--;
            }
            // right-> left
            else if (direction==2)
            {
                for (int col= right; col >=left; col--)
                {
                    matrix[bottom][col]=value++;
                }
                bottom--;
                
            }
            //bottom -> top
            else 
            {
                for (int row = bottom; row >= top; row--)
                {
                   matrix[row][left]=value++;
                }
                left++;
                
            }
            direction = (direction+1)%4;
            // 0, 1, 2, 3  direction agar 4 hogi to firse modulo ki wajah se 0 ho jayegi
            
            
            
            
        }
        
     return matrix;
    
 }

int main() {

    int n;
    cout<<"enter form of matrix";
    cin>>n;

    vector<vector<int > > matrix(n, vector<int>(n));

    matrix = createSpiralMatrix(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<matrix[i][j]<<" ";
        } cout<< endl;
        
    }
    


    return 0;
}