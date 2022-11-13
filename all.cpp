#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
class Process
{
public:
    int pID, arrivalTime, burstTime, remBurstTime, completionTime, turnAroundTime, waitingTime;
    Process(int pID, int arrivalTime, int burstTime)
    {
        this->pID = pID;
        this->arrivalTime = arrivalTime;
        this->burstTime = burstTime;
        this->remBurstTime = burstTime;
        this->completionTime = INT_MIN;
        this->turnAroundTime = INT_MIN;
        this->waitingTime = INT_MIN;
    }
    void diplay()
    {
        cout << "Process ID=" << pID << ", arrival time=" << arrivalTime << ", burst time=" << burstTime << ", completion time=" << completionTime << ", turnAround time=" << turnAroundTime << ", waiting time=" << waitingTime << endl;
    }
};
class ProcessScheduling
{
    float findAvgTAT(const vector<Process> &processList)
    {
        float sum = 0;
        for (auto p : processList)
            sum += p.turnAroundTime;
        return sum / processList.size();
    }
    float findAvgWT(const vector<Process> &processList)
    {
        float sum = 0;
        for (auto p : processList)
            sum += p.waitingTime;
        return sum / processList.size();
    }

public:
    void display(const vector<Process> &processList)
    {
        cout << right
             << setw(10)
             << "Process"
             << right
             << setw(15)
             << "Arrival Time"
             << right
             << setw(13)
             << "Burst Time"
             << right
             << setw(18)
             << "Completion Time"
             << right
             << setw(18)
             << "Turnaround Time"
             << right
             << setw(15)
             << "Waiting Time"
             << endl;
        for (auto i = 0; i < processList.size(); i++)
        {
            cout << right
                 << setw(10)
                 << processList[i].pID
                 << right
                 << setw(15)
                 << processList[i].arrivalTime
                 << right
                 << setw(13)
                 << processList[i].burstTime
                 << right
                 << setw(18)
                 << processList[i].completionTime
                 << right
                 << setw(18)
                 << processList[i].turnAroundTime
                 << right
                 << setw(15)
                 << processList[i].waitingTime << "\n";
        }
        cout << "Average Turnaround Time = " << findAvgTAT(processList) << endl;
        cout << "Average Waiting Time = " << findAvgWT(processList) << endl;
    }
    static bool sortIncreasingArrivalTime(Process &p1, Process &p2)
    {
        return (p1.arrivalTime < p2.arrivalTime);
    }
};
class FCFS : public ProcessScheduling
{
public:
    void run(vector<Process> processList)
    {
        sort(processList.begin(), processList.end(), sortIncreasingArrivalTime);
        int time = 0;
        for (int i = 0; i < processList.size(); i++)
        {
            processList[i].remBurstTime = 0;
            processList[i].completionTime = max(processList[i].arrivalTime, time) + processList[i].burstTime;
            processList[i].turnAroundTime = processList[i].completionTime - processList[i].arrivalTime;
            processList[i].waitingTime = processList[i].turnAroundTime - processList[i].burstTime;
            time = processList[i].completionTime;
        }
        display(processList);
    }
};

class SJF : public ProcessScheduling
{
public:
    void run(vector<Process> processList)
    {
        sort(processList.begin(), processList.end(), sortIncreasingArrivalTime);

        int time = processList[0].arrivalTime;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> waitingQ; // Min heap denoting queue of already arrived processes. Each element of the queue is a pair denoting <burstTime, index of process in processList array>

        waitingQ.push({processList[0].burstTime, 0});
        while (!waitingQ.empty())
        {
            pair<int, int> currProcess = waitingQ.top();
            waitingQ.pop();

            processList[currProcess.second].remBurstTime = 0;
            processList[currProcess.second].completionTime = time + currProcess.first;
            time = processList[currProcess.second].completionTime;
            for (int i = currProcess.second + 1; i < processList.size(); i++)
            {
                if (processList[i].arrivalTime <= time && processList[i].arrivalTime > time - currProcess.first)
                    waitingQ.push({processList[i].burstTime, i});
                else
                    break;
            }
        }
        for (auto i = 0; i < processList.size(); i++)
        {
            processList[i].turnAroundTime = processList[i].completionTime - processList[i].arrivalTime;
            processList[i].waitingTime = processList[i].turnAroundTime - processList[i].burstTime;
        }
        display(processList);
    }
};
class RR : public ProcessScheduling
{
public:
    void run(vector<Process> processList, int timeQuantum)
    {
        sort(processList.begin(), processList.end(), sortIncreasingArrivalTime);
        int time = processList[0].arrivalTime;

        queue<int> waitingQ; // Queue containing those indices of processList array which have already arrived
        waitingQ.push(0);

        while (!waitingQ.empty())
        {
            int currProcessIndex = waitingQ.front();
            waitingQ.pop();

            int runtime = min(processList[currProcessIndex].remBurstTime, timeQuantum);
            // cout<<"Executing "<<processList[currProcessIndex].pID<<endl;
            processList[currProcessIndex].remBurstTime -= runtime;
            time += runtime;

            for (int i = currProcessIndex + 1; i < processList.size(); i++)
            {
                if (processList[i].arrivalTime <= time && processList[i].arrivalTime > time - runtime)
                    waitingQ.push(i);
            }
            if (processList[currProcessIndex].remBurstTime)
                waitingQ.push(currProcessIndex);
            else
                processList[currProcessIndex].completionTime = time;
        }
        for (int i = 0; i < processList.size(); i++)
        {
            processList[i].turnAroundTime = processList[i].completionTime - processList[i].arrivalTime;
            processList[i].waitingTime = processList[i].turnAroundTime - processList[i].burstTime;
        }

        display(processList);
    }
};

int main()
{

    vector<Process> processList1 = {{1, 0, 5}, {2, 3, 9}, {3, 6, 6}};

    FCFS f;
    f.run(processList1);

    vector<Process> processList2 = {{1, 1, 7}, {2, 2, 5}, {3, 3, 1}, {4, 4, 2}, {5, 5, 8}};

    SJF s;
    s.run(processList2);

    vector<Process> processList3 = {{1, 0, 5}, {2, 1, 4}, {3, 2, 2}, {4, 3, 1}};

    RR r;
    r.run(processList3, 2);

    return 0;
}