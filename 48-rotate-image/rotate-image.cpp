class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
          int n = matrix.size();
        int m = matrix[0].size();

        // 1. Transpose the matrix
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < m; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // 2. Reverse every row
        for(int i = 0; i < n; i++) {
            int p1 = 0, p2 = m - 1;

            while(p1 < p2) {
                swap(matrix[i][p1], matrix[i][p2]);
                p1++;
                p2--;
            }
        }

        
    }
};