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
int first_occurence_Iter(int arr[],int low,int high,int X)
{   
    int mid=(low+high)/2;
    while(low<=high)
    {
        if(arr[mid]>X)
           high=mid-1;
        else if(arr[mid]<X)
           low=mid+1;
        else{
            if(mid==0||arr[mid-1]!=arr[mid])
               return mid;
            else 
               low=mid+1;
        }
    }
    return -1;
}

void count_occurences(int arr[],int n,int X)
{
   int low=0;
   int high=n;
   int first=first_occurence_Iter(arr,low,high,X);
   if(first==-1)
        cout<<"Not"<<endl;
    else
   cout<< (last_occurence(arr,low,high-1,X)-first)+1<<endl;
}
int main()
{   cout<<"Hello"<<endl;
    int arr[6]={5,10,10,20,20,20};
    count_occurences(arr,6,10);
 return 0;
}