#include <bits/stdc++.h>
using namespace std;
int NumberofElementsInIntersection(int a[], int b[], int n, int m)
{
    // Your code goes here
    set<int> s1;
    set<int> s2;
    for (int i = 0; i < n; i++)
        s1.insert(a[i]);
    for (int j = 0; j < m; j++)
        s2.insert(b[j]);
    int total = s1.size() + s2.size();
    // for (int i = 0; i < s2.size(); i++)
    //     s1.insert(s2[i]);
    for(auto i:s2)
        s1.insert(i);
    int total2 = s1.size();
    return total - total2;
}
int main()
{
    int n = 5;
    int m = 3;
    int a[n] = {89, 24, 75, 11, 23};
    int b[m] = {89, 2, 4};
    cout <<NumberofElementsInIntersection(a,b,n,m) ;
        return 0;
}