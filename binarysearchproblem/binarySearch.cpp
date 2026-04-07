#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> &input, int target) {
    int lo = 0;
    int hi = input.size() - 1;

    while (lo <= hi) {
        // int mid = (lo + hi) / 2;
           int mid = lo + (hi-lo)/2;  // modified formula for overflow condition

        if (input[mid] == target)
            return mid;
        else if (input[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }

    return -1;  // if not found
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> input;
    cout << "Enter elements of array (sorted): ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        input.push_back(val); // fixed input
//        In C++, a vector is a dynamic array from the Standard Template Library (STL). It doesn't have a fixed size—you can grow or shrink it at runtime.

         // ✅ push_back() adds a new element at the end of the vector.
    }

    int x;
    cout << "Enter target element: ";
    cin >> x;

    int result = binarysearch(input, x);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
