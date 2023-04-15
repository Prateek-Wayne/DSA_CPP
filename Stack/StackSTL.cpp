#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(10);    
    s.push(11);    
    s.push(12);    
    s.push(13);    
    s.push(15);    

    s.pop();
    cout<<s.top();
    cout<<s.empty();
  
    

 return 0;
}