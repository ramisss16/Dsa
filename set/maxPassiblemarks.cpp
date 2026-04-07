#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q;
    cin >> n >> p >> q;

    unordered_set<int> s;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int correct = i;
            int incorrect = j;
            int unattended = n - (i + j);

            if (unattended >= 0) {
                int count = correct * p + incorrect * q;
                s.insert(count);
            } else {
                break;
            }
        }
    }

    cout << "All possible scores: ";
    for (auto value : s) {
        cout << value << " ";
    }
    cout << endl;

    cout << "Total unique scores: " << s.size() << endl;

    return 0;
}
