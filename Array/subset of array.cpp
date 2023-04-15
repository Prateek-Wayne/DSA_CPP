#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {1, 2, 3, 4, 5};
    vector<vector<int>> subset;
    for (int i = 0; i < v.size(); i++)
    {
        vector<int> set;
        for (int j = 0; j < v.size(); j++)
        {
            set.push_back(v[j]);
        }
        subset.push_back(set);
    }
    //    for(int i=0;i<subset.size();i++)
    //    {
    //         for(int j=0;j<subset[i].size();i++)
    //             {
    //                 cout<<subset[i][j];
    //             }
    //         cout<<endl;
    //    }
    cout<<subset[0][0]<<subset[0][1]<<subset[0][2]<<subset[0][3]<<subset[0][4]<<endl;
    return 0;
}