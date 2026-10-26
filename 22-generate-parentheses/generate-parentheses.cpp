class Solution {
public:
    vector<string> generateParenthesis(int n) {
                vector<string> ans;
        string temp = "";

        solve(n, 0, 0, temp, ans);

        return ans;
    }

    void solve(int n, int open, int close,
               string &temp, vector<string> &ans) {

        // Base case
        if (temp.length() == 2 * n) {
            ans.push_back(temp);
            return;
        }

        // Add opening bracket
        if (open < n) {
            temp.push_back('(');

            solve(n, open + 1, close, temp, ans);

            temp.pop_back();
        }

        // Add closing bracket
        if (close < open) {
            temp.push_back(')');

            solve(n, open, close + 1, temp, ans);

            temp.pop_back();
        }

    }
};