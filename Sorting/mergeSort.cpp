#include <bits/stdc++.h>
using namespace std;
void two_way_Merge(int arr1[], int arr2[],int arr3[], int n, int m)
{
    int i = 0, j = 0, k = 0;
    arr3[n+m];
    // int arr3[n + m];
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
    }
    for(;i<n;i++)
        arr3[k++]=arr1[i];
    for(;j<m;j++)
        arr3[k++]=arr2[j];
    
}
int main()
{   
    int A[5]={1,3,5,7,9};
    int B[3]={2,4,8};
    int C[8];
    two_way_Merge(A,B,C,5,3);
    for(int i=0;i<8;i++)
    cout<<C[i]<<"|";


    return 0;
}