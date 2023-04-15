#include<bits/stdc++.h>
using namespace std;


int main()
{ 
   
     int t[10][10];
     memset(t,-1,sizeof(t));
     for(int i=0;i<10;i++)
     {
        for(int j=0;j<10;j++)
            cout<<t[i][j]<<" ";
        cout<<endl;
     }

 return 0;
}