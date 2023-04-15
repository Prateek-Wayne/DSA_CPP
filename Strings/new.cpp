#include<bits/stdc++.h>
using namespace std;
int main()
{


       string S="Hello World";
    transform(S.begin(), S.end(), S.begin(), ::tolower);
    
       map<char,int>m;
       for(int i=0;i<S.length();i++)
       {
           m[S[i]]++;
       }
     for(auto i:m)
        cout<<i.first<<"->"<<i.second<<endl;
   

    return 0;
   

    return 0;
 return 0;
}