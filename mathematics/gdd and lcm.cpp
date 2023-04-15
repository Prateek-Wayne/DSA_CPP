#include <bits/stdc++.h>
using namespace std;
// ..................GCD NAIVE SOLUTION...........
int gcd_naive(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
            break;

        res--;
    }
    return res;
}
// .......................GCD EUCLEDIAN..........
int gcd_euclidian(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a; // return b;
}
//................GCD EUCLIDIAN OPTIMAL SOLUTION
int gcd_Optimal(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd_Optimal(b,a%b);
}
//.................LCM NAIVE......
int lcm(int a,int b)
{
    int res=max(a,b);
    while(true)
    {
        if(a%res==0&&b%res==0)
        {
            return res;
        }
        res++;
    }
    return res;
}
//..................LCM BEST approcah
int lcm_Optimal(int a,int b)
{
    return a*b/gcd_Optimal(a,b);
}
int main()
{

    cout << gcd_naive(4, 24);
    cout << endl
         << gcd_euclidian(6, 40);
    cout<<endl<<gcd_Optimal(50,75);
    return 0;
}
