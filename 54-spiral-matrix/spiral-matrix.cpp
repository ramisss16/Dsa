class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
       vector<int> ans;
        
        int top = 0;
        int bottom = mat.size() - 1;
        int left = 0;
        int right = mat[0].size() - 1;

        while (top <= bottom && left <= right) {

            // 1. Left -> Right
            for (int j = left; j <= right; j++) {
                ans.push_back(mat[top][j]);
            }
            top++;

            // 2. Top -> Bottom
            for (int i = top; i <= bottom; i++) {
                ans.push_back(mat[i][right]);
            }
            right--;

            // 3. Right -> Left
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    ans.push_back(mat[bottom][j]);
                }
                bottom--;
            }

            // 4. Bottom -> Top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
        }

        return ans;
       
    }
};