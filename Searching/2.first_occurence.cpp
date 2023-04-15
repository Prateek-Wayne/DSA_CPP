#include<bits/stdc++.h>
using namespace std;
int first_occurence_Rec(int arr[],int low,int high,int X)
{    
    int mid=(low+high)/2;
    if(arr[mid]>X)
          return first_occurence_Rec(arr,low,mid-1,X);
    else if(arr[mid]<X)
          return first_occurence_Rec(arr,mid+1,high,X);
    else{
        if(mid==0||arr[mid-1]!=arr[mid])
            return mid;
        else
            return first_occurence_Rec(arr,low,mid-1,X);
    }
        
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
}


int main()
{
    int arr[6]={5,10,10,20,20,20};
    cout<<first_occurence_Rec(arr,0,6,5)<<endl;
    cout<<first_occurence_Iter(arr,0,6,20)<<endl;
 return 0;
}