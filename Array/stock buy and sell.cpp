#include<bits/stdc++.h>
using namespace std;
int stock(vector<int> v)
{
    int profit=0;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]>v[i-1]){
            profit+=v[i]-v[i-1];
        }
    }
    return profit;
}
int main()
{
    vector<int>v{5,2,6,1,4,7,3,6};
    cout<<stock(v);
 return 0;
}