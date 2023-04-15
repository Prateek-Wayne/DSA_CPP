#include <bits/stdc++.h>
using namespace std;
int second_largest(int arr[], int n)
{
    int largest = INT_MIN;
    int second_Largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_Largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_Largest and arr[i] < largest)
        {
            second_Largest = arr[i];
        }
    }
    return second_Largest;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << second_largest(arr, 5);
    return 0;
}