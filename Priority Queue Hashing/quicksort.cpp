#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e)
{
    int pivot=s;
    int i=s;
    int j=e;
    while(i<j)
        {
            
            while(arr[i]<=arr[pivot] && i<e)
                i++;
            while(arr[j]>arr[pivot] && j>pivot)
                j--;
            if(i<j)
                swap(arr[i],arr[j]);
        }
        if(j!=pivot)
        swap(arr[j],arr[pivot]);
        return j;



}
void quickSort(int arr[], int s, int e)
{
    if (s < e)
    {
        int p = partition(arr, s, e);
        quickSort(arr, s, p-1 );
        quickSort(arr, p + 1, e);
    }
}

int main()
{
    int n=12;
    // int arr[n]={20,5,40,60,10,30};
    int arr[n]={20,5,40,60,10,30,54,45,45,45,60,101};
    // int arr[n]={24 ,18, 38, 43 ,14, 40, 1, 54};
    


    quickSort(arr,0,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}