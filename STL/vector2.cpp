#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(3, 100);
    //  cout<<v[4];
    //  cout<<endl<<v.at(4);
    // another for loop //auto=vector<int>::iterator;
    for (auto it = v.begin(); it != v.end(); it++) // can use this also-->> for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout << (*it) << ".";
    }
    cout << endl;
    // another form of initialising a vector:
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v2(arr, arr + n);
    // another for loop :
    for (auto it = v2.rbegin(); it != v2.rend(); it++)
    {
        cout << *(it) << ".";
    }
    // best for loop representation:
    for (auto &x : v2)
    {
        x = 8;
        // cout<<x<<":";
    }
    for (auto x : v2)
    {
        cout << x;
    }
    return 0;
}