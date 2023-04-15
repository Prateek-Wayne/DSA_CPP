#include <bits/stdc++.h>
using namespace std;
int find_largest(int arr[],int n)
{
    
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[max])
            max = i;
    }
    return max;
}


int main()
{
    int arr[] = {10, 11, 12, 13,15,235,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << find_largest(arr,n)<<endl;
    cout<<*max_element(arr,arr+n)<<endl;
    vector<int> v={10,14,16,238273};
    cout<<*max_element(v.begin(),v.end());


    return 0;
}
