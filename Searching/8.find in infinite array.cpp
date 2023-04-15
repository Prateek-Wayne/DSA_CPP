#include <bits/stdc++.h>
using namespace std;
int binary_search_Recu(int arr[], int low, int high, int X)
{
    int mid = (low + high) / 2;
    if (arr[mid] == X)
        return X;
    else if (arr[mid] > X)
        return binary_search_Recu(arr, low, mid - 1, X);
    else
        return binary_search_Recu(arr, mid + 1, high, X);
}
int search_return(int arr[], int X)
{
    if (arr[0] == X)
        return 0;
    int i = 1;
    while (arr[i] < X)
        i = i * 2;
    if (arr[i] == X)
        return i;
    return binary_search_Recu(arr, i / 2 + 1, i - 1, X);
}
int main()
{
    return 0;
}