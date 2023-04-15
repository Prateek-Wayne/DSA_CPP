#include<bits/stdc++.h>
using namespace std;
void kthbitL(int n,int k)
{
    if(n&(1<<(k-1))!=0)
      cout<<"Set\n";
    else
      cout<<"Unset";

}
void kthBitR(int n,int k)
{
    if(n>>(k-1)&1==1)
        cout<<"Set";
    else 
        cout<<"Unset";
}
int main()
{ 

    kthbitL(5,2);
 return 0;
}