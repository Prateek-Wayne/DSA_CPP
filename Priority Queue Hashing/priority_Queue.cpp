#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(15);
    pq.push(20);
    pq.push(25);
    pq.push(5);
    cout<<pq.size()<<"\n";
    cout<<pq.top()<<"\n";
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<"\n..............MINheap...........\n";
    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(15);
    pq1.push(17);
    pq1.push(19);
    pq1.push(21);
    pq1.push(22);
    while(!pq1.empty())
    {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }

}