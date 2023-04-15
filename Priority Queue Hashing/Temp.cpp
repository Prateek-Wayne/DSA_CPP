#include<bits/stdc++.h>
using namespace std;
 vector<int> merge(vector<int>& arr1,vector<int>& arr2)
    {
        int i=0;
        int j=0;
        int m=arr1.size();
        int n=arr1.size();
        vector<int> ans;
        while(i<m and j<n)
        {
            if(arr1[i]<arr2[j])
                {
                    ans.push_back(arr1[i]);
                    i++;
                }
            else
            {
                ans.push_back(arr2[j]);
                j++;
            }
        }
        while(i<m)
        {
             ans.push_back(arr1[i]);
                    i++;
        }
        while(j<n)
        {
            ans.push_back(arr2[j]);
                j++;
        }
        return ans;
    }
int main()
{
 return 0;
}