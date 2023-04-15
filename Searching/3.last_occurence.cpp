#include<bits/stdc++.h>
using namespace std;
int last_occurence(int arr[],int low,int high,int X)
{ 
    int n=high;
    high=high-1;
   
    int mid=(low+high)/2;
    while(low<=high)
    {
        if(arr[mid]>X)
            high=mid-1;
        else if(arr[mid]<X)
            low=mid+1;
        else{
            if(mid==n-1||arr[mid+1]!=arr[mid])
                return mid;
            else
                low=mid+1;
        }
    }
    return -1;
    
}
int main()
{
  int arr[6]={5,10,10,20,20,20};
  cout<<last_occurence(arr,0,6,10);
 return 0;
}