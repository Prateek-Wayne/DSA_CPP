#include<bits/stdc++.h>
using namespace std;
// ...........................................
int countDigit(long n)
{
    return floor(1+log10(n));
}

int main()
{
    cout<<countDigit(1234);
}