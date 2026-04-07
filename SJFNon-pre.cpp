
// this file in enough for every libaries
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "Enter no. of process";
    cin >> n;

    int pid[n], bt[n], wt[n], tat[n];
    float avg_wt = 0, avg_tat = 0;

    // input burst times
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Burst time for process " << i + 1 << ": ";
        cin >> bt[i];
        pid[i] = i + 1;
    }

    // sorting by burst time
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            
            if (bt[i] > bt[j])
            {
                swap(bt[i], bt[j]);
                swap(pid[i], pid[j]);
            }
        }
    }

    // waiting time for first process is 0
    wt[0] = 0;

    // calculate wt
    for (int i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    // claculating tat
    for (int i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
        avg_wt += wt[i];
        avg_tat += tat[i];
    }
    // display result
    cout << "\nprocess\tBurstTime\tWaitingTime\tTurnAroundTime\n";
    for (int i = 0; i < n; i++)
    {
        cout << "p" << pid[i] << "\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tat[i] << endl;
    }

    cout << "\nAverage Waiting Time:" << avg_wt / n;
    cout << "\nAverage Turn Around Time:" << avg_tat / n;

    return 0;
}