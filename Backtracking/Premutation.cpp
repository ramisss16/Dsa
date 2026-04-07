#include<bits/stdc++.h>
using namespace std;

void permutation(string str, int i){
    if(i == str.size()-1){
        cout<<str<<endl;
        return;
    }

//     💥 Problem → duplicate permutations
// Your swap recursion works fine only when all characters are unique.
// But when the string has duplicates like:
// "KK"
// "AAB"
// your loop generates the same permutation multiple times.
// 🔍 Why duplicates happen
// Example "KK":
// Loop at level i = 0:
// j = 0 → swap K,K → "KK"
// j = 1 → swap K,K → "KK"
// Both recursive paths produce:
// KK
// KK
// 👉 duplicate output ❌
// That’s exactly why GFG fails.

unordered_set<char> duplicate;
    for(int j = i; j<str.size(); j++){

        if(duplicate.count(str[j])) continue;
        duplicate.insert(str[j]);

        swap(str[i], str[j]);
        permutation(str, i+1);
        swap(str[i], str[j]);
    }
}
int main(){

    string str = "kk";
    permutation(str, 0);

return 0;
}