#include <bits/stdc++.h>
using namespace std;
int main()
{ int arr[100];
  for(int i=0;i<100;i++)
  { 
    arr[i]=rand()%100+1;    
  }
  map<int ,int> m;
  for(int i=0;i<100;i++)
  {
    m[arr[i]]=m[arr[i]]+1;
  }
  for(auto i:m)
  {
    cout<<i.first<<" "<<i.second<<endl;
  }
}