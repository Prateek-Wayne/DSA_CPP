#include <bits/stdc++.h>
using namespace std;
int minloc(int arr[], int lb, int n)
{
    int loc = lb;
    for (int i = 0; i < n; i++)
    {
        if (arr[loc] > arr[i])
            loc = i;
    }
    return loc;
}
void SelectionSort(int arr[], int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        int loc = minloc(arr, i-1, n);
        // if (loc != i)
        //  swap(arr[i], arr[]);
        swap(arr[loc],arr[i]);
    
    }
}
int main()
{
    int arr[8] = {44, 77, 22, 88, 33, 66, 11, 55};
    SelectionSort(arr, 8);
    for (int i = 0; i < 8; i++)
        cout << arr[i] << "|";
    return 0;
}