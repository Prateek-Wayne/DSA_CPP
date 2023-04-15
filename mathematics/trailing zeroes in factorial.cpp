#include <bits/stdc++.h>
using namespace std;
// ......FACTORIAL PROGRAM.........
int fact_iterative(int n)
{
    int fact = 1;
    if (n == 0 || n == 1)
        return fact;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int fact_recursive(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact_recursive(n - 1);
}
// ..................COUNTING TRAILING ZEROES..........
int count_zeroes(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + n / i;
    }
    return res;
}
int main()
{

    cout << fact_iterative(5) << endl;
    cout << fact_recursive(20);
    cout << endl
         << count_zeroes(20000) << endl;
    return 0;
}