#include<bits/stdc++.h>
using namespace std;

float findAvg(const vector<int> &arr)
{
    float sum = 0;
    for(auto a: arr)
        sum += a;
    return sum / arr.size();
}

void FCFS(vector<int> p, vector<int> bt, vector<int> at)
{
    int n = p.size(), time = 0;
    vector<int> wt(n, 0), ta(n, 0), ct(n, 0);
    for(auto i = 0; i < n; i++)
    {   
        ct[i] = max(at[i], time) + bt[i];
        ta[i] = ct[i] - at[i];
        wt[i] = ta[i] - bt[i];
        time = ct[i]; 
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
    vector<int> process = {1, 2, 3};
    vector<int> burst_time = {5, 9, 6};
    vector<int> arrival_time = {0, 3, 6};
    FCFS(process, burst_time, arrival_time);
    return 0;
}