#include<bits/stdc++.h>
using namespace std;
// void freqency(int arr[],int n)
// {  
//     int current;
//     int count;
//     for(int i=0;i<n;i++)
//     {
//         current=arr[i];
//         count=0;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]==current)
//             {
//                 count++;
//             }
//         }
//         if(arr[])
//         cout<<arr[i]<<":"<<count<<endl;

//     }
// }
void frequency(int arr[],int n)
{  
    // ...........using map......................
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(auto i:m)
    {
        cout<<i.first<<"->"<<i.second<<endl;
    }
}
int main()
{ 
    int arr[7]={1,1,1,3,3,4,5};
    frequency(arr,7);
 return 0;
}