#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> num1,vector<int> num2)
{
    int i=0;
    int j=0;
    int n=num1.size();
    int m=num2.size();
    vector<int> ans;
    while(i<n && j<m)
    {
        if(num1[i]<=num2[j])
        {
            ans.push_back(num1[i++]);
        }
        else{
            ans.push_back(num2[j++]);
        }
    }
    while(i<n)
    {
        ans.push_back(num1[i++]);
    }
    while(j<m)
    {
        ans.push_back(num2[j++]);
    }
    return ans;
}
void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int n1=m-l+1;
         int arr1[n1];
         for(int i=0;i<n1;i++)
         {
            arr1[i]=arr[l+i];
         }
         int n2=r-m;
         int arr2[n2];
         for(int i=0;i<n2;i++)
            arr2[i]=arr[m+1+i];
         int i=0;
         int j=0;
         int k=l;
         while(i<n1 && j<n2)
         {
            if(arr1[i]<=arr2[j])
            {
                arr[k++]=arr1[i];
                i++;
            }
            else{
                arr[k++]=arr2[j];
                j++;
            }
         }
         while(i<n1)
         {
            arr[k++]=arr1[i++];
         }
         while(j<n2)
         {
            arr[k+1]=arr2[j++];
         }
    }

    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r)
        {
            int mid=l+(r-l)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
        
        }
    }

int main()
{
    vector<int> num1={1};
    vector<int> num2={0};
    vector<int> ans=merge(num1,num2);
    for(auto i:ans)
        cout<<i<<" ";
 return 0;
}