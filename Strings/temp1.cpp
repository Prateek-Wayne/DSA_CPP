#include <bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second > b.second);
}
vector<int> sortByFreq(int arr[], int n)
{
    map<char, int> map1;
    for (int i = 0; i < n; i++)
        map1[arr[i]]++;

    vector<pair<int,int>> v;
    for(auto i:map1)
    {
        v.push_back(make_pair(i.first,i.second));
    }
    sort(v.begin(),v.end(),sortbysec);
   
    vector<int> ans;
    for(auto i:v)
    {
        while(i.second--)
            ans.push_back(i.first);
        
    }
    return ans;

}
int main()
{
    int A[5] = {5, 5, 4, 6, 4};
    vector<int> ans=sortByFreq(A,5);
    for(auto i:ans)
        cout<<i<<endl;
        
}