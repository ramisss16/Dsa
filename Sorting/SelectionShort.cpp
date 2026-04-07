#include <bits/stdc++.h>
using namespace std;

void selectionsort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        // finding mini element
        int min_index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            swap(v[i], v[min_index]);
        }
    }
}
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;

    vector<int> v(n);
    cout << "enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    selectionsort(v);

    cout << "sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}