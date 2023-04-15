#include <bits/stdc++.h>
using namespace std;
int odd_occuring(int arr[],int n)
{
    // int n = sizeof(arr) / sizeof(arr[0]);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}
int main()
{

    int arr[7] = {1, 1, 2, 2, 3, 5, 5};
    cout << odd_occuring(arr,7);
    // cout<<sizeof(arr)/sizeof(arr[0]);
    // cout<<(1^1^2^2^3^5^5);

    return 0;
}