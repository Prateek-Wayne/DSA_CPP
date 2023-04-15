#include <bits/stdc++.h>
using namespace std;
int Partition(int arr[], int lb, int ub)
{
    int Pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (arr[start] <= Pivot)
            start++;
        while (arr[end] > Pivot)
            end--;
        if (start < end)
            swap(arr[start], arr[end]);
    }
    // if(start>end)
    //     swap(Pivot,arr[end]);
    if (start > end)
        swap(arr[lb], arr[ub]) ;
    return end;
}
void QuickSort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = Partition(arr, lb, ub);
        QuickSort(arr, lb, loc - 1);
        QuickSort(arr, loc + 1, ub);
    }
}
int main()
{
    int arr[9] = {7, 6, 10, 5, 9, 2, 1, 15, 7};
    QuickSort(arr, 0, 8);
    for (int i = 0; i < 7; i++)
        cout << arr[i] << "|";
    return 0;
}