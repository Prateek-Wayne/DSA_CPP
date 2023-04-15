#include<bits/stdc++.h>
using namespace std;
bool Palindrome(string str)
{
    string rev=str;
    reverse(rev.begin(),rev.end());
    return(rev==str);
}
int main()
{
    string str="ABA";
    cout<<Palindrome(str);
    
 return 0;
}