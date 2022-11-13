#include <bits/stdc++.h>
using namespace std;

#define mytype pair<int, int>

float findAvg(vector<int> arr)
{
    float sum = 0;
    for (auto a : arr)
        sum += a;
    return sum / arr.size();
}

void SJF(vector<int> p, vector<int> bt, vector<int> at)
{
    int n = p.size(), time = INT_MAX;
    vector<int> wt(n, 0), ta(n, 0), ct(n, 0);
    priority_queue<mytype, vector<mytype>, greater<mytype>> wq;
    for (auto i = 0; i < n; i++)
        time = min(at[i], time);
    for (auto i = 0; i < n; i++)
        if (at[i] == time)
            wq.push({bt[i], p[i]});
    while (!wq.empty())
    {
        mytype proc = wq.top();
        wq.pop();
        ct[proc.second - 1] = time + proc.first;
        time = ct[proc.second - 1];
        for (auto i = 0; i < n; i++)
            if (at[i] <= time && at[i] > time - proc.first)
                wq.push({bt[i], p[i]});
    }
    for (auto i = 0; i < n; i++)
    {
        ta[i] = ct[i] - at[i];
        wt[i] = ta[i] - bt[i];
    }
       cout << right
             << setw(10)
             << "Process"
             << right
             << setw(15)
             << "Burst Time"
             << right
             << setw(13)
             << "Arrival Time"
             << right
             << setw(18)
             << "Waiting Time"
             << right
             << setw(18)
             << "Turnaround Time"
             << right
             << setw(15)
             << "Completion Time"
             << endl;
        for (auto i = 0; i < n; i++)
        {
            cout << right
                 << setw(10)
                 << p[i]
                 << right
                 << setw(15)
                 << bt[i]
                 << right
                 << setw(13)
                 << at[i]
                 << right
                 << setw(18)
                 << wt[i]
                 << right
                 << setw(18)
                 << ta[i]
                 << right
                 << setw(15)
                 << ct[i] << "\n";
        }


    cout << "Average Turnaround Time = " << findAvg(ta) << endl;
    cout << "Average Waiting Time = " << findAvg(wt) << endl;
}

int main()
{
    vector<int> process = {1, 2, 3, 4, 5};
    vector<int> burst_time = {7, 5, 1, 2, 8};
    vector<int> arrival_time = {1, 2, 3, 4, 5};
    SJF(process, burst_time, arrival_time);
    return 0;
}