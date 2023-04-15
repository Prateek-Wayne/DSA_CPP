#include <bits/stdc++.h>
using namespace std;
int rainwater(int arr[], int n)
{
    int left[n], right[n];
    // creating left aux array
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i]);
    }
    // creating right aux array
    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (min(left[i], right[i]) - arr[i]);
    }
    return ans;
}
int main()
{
    int arr[4]={7,4,0,9};
    cout<<rainwater(arr,4);
    return 0;
}