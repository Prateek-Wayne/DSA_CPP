#include <bits/stdc++.h>
using namespace std;
int count_one(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] != 1)
        {
            low = mid + 1;
        }
        else if (arr[mid] == 1)
        {
            if (arr[mid - 1] == arr[mid])
                return (n - mid + 1);
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[7] = {0, 0, 1, 1, 1, 1, 1};
    cout << count_one(arr, 7);
    return 0;
}