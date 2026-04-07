#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &arr, int k)
{
    deque<int> du;
    vector<int> res;

    for (int i = 0; i < k; i++)
    {
        while (not du.empty() && arr[du.back()] < arr[i])
        {
            du.pop_back();
        }
        du.push_back(i);
    }
    res.push_back(arr[du.front()]);

    for (int i = k; i < arr.size(); i++)
    {
        int curr = arr[i];
        if (du.front() == (i - k))
            du.pop_front();
        while (not du.empty() && arr[du.back()] < arr[i])
        {
            du.pop_back();
        }
        du.push_back(i);
        res.push_back(arr[du.front()]);
    }
    return res;
}
int main()
{

       vector<int> qu = {1, 3, -1, -3, 5, 3, 6, 7};
    vector<int> ans = maxSlidingWindow(qu, 3);

    for (int x : ans)
        cout << x << " ";
}