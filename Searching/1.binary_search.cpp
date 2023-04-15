#include<bits/stdc++.h>
using namespace std;
int binary_search_Iter(int arr[],int n,int X)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==X)
           return X;
        else if (arr[mid]>X)
           high=mid-1;
        else
           low=mid+1;
        
    }
}
int binary_search_Recu(int arr[],int low,int high,int X )
{
    int mid=(low+high)/2;
    if(arr[mid]==X)
        return X;
    else if(arr[mid]>X)
        return binary_search_Recu(arr,low,mid-1,X);
    else 
        return binary_search_Recu(arr,mid+1,high,X);
}
int main()
{
 return 0;
}