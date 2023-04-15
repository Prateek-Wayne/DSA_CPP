#include<bits/stdc++.h>
using namespace std;
void sort_array(int arr[],char ch[],int n)
{
    pair<int,char> p[n];
    for(int i=0;i<n;i++)
    {
        p[i]={arr[i],ch[i]};
    }
    sort(p,p+n);
    for(int i=0;i<n;i++)
    {
        cout<<p[i].second<<"\n";
    }

}
// using namespace std;
int main()
{   int n=5;
    int arr[n]={5,6,7,4,1};
    char ch[5]={'x','y','p','q','r'};
    sort_array(arr,ch,n);
 return 0;
}