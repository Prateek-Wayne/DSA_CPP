#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
         arr[j + 1]=temp;
    }
}
int main()
{
    int arr[7] = {2, 10, 3, 7, 1, 6, 4};
    InsertionSort(arr, 7);
    for (int i = 0; i < 7; i++)
        cout << arr[i] << "|";
    return 0;
}