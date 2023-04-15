#include<bits/stdc++.h>
using namespace std;
int count_Set_Naive(int n)
{
    int res=0;
    while(n>0)
    {
        if(n&1==1)//if(n%2!=0)//
            res++;//    res++;//res=res+(n&1);
        n=n>>1;     //n=n/2     //
    }
    return res;
}
int main()
{
    cout<<count_Set_Naive(7);
    
 return 0;
}