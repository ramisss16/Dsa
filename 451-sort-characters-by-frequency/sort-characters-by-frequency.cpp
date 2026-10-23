class Solution {
public:
  
    string frequencySort(string s) {
      
           vector<int> freq(128, 0);

        for (char ch : s) {
            freq[(unsigned char)ch]++;
        }

        sort(s.begin(), s.end(), [&](char a, char b) {
            if (freq[(unsigned char)a] == freq[(unsigned char)b]) {
                return a > b;
            }
            return freq[(unsigned char)a] > freq[(unsigned char)b];
        });

        return s;
    }
};