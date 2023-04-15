#include <bits/stdc++.h>
using namespace std;
int find_floor(int arr[], int n, int X)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < X)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else if (arr[mid] > X)
            high = mid - 1;
        else
            return arr[mid];
    }
    return ans;
}

int main()
{
    int arr[6] = {0, 4, 6, 7, 9, 10};
    cout << find_floor(arr, 6, 3);

    return 0;
}