#include<bits/stdc++.h>
using namespace std;
void BubbleSortNAIVE(int arr[],int n)
{
   for(int i=0;i<n-1;i++)
   {
    for(int j=0;j<n;j++)
    {
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    }
   }
}
//Sabse bada wala element hamesha last me chala jayega
void BubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
   {
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    }
   }
}

int main()
{
    int arr[7]={2,10,3,7,1,6,4};
    BubbleSortNAIVE(arr,7);
    for(int i=0;i<7;i++)
        cout<<arr[i]<<"|";
 return 0;
}