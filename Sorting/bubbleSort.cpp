#include <bits/stdc++.h>

using namespace std;

void BubbleSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        // isse pta chlega ko array sorted hoo gua hai
        // sbse phle define kiye false
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            
            if (v[j] > v[j + 1])
                
            {
                // agar swap nhhi hua to flag false hi rhega
                flag = true;
                swap(v[j], v[j + 1]);
            }
        }
        // agar flag false hi hai to koi swap nhii hua h to break krdo
        if (!flag)
            break;
    }
    return;
}
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;

    vector<int> v(n);
    cout << "enter element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    BubbleSort(v);
    cout << "soted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}