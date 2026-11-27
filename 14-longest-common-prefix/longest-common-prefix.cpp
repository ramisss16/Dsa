class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {

        string ans = "";

        for(int i = 0; i<str[0].size(); i++){
            char ch = str[0][i];

            for(int j = 0; j<str.size(); j++){
                if(i>=str[j].size() || str[0][i] != str[j][i]) return ans;
            }

            ans += ch;
        }

        return ans;
    }
};