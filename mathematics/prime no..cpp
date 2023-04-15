#include <bits/stdc++.h>
using namespace std;
bool prime_no(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
void prime_factor(int n)
{
    int x = n;
    for (int i = 2; x > 1; i++)
    {
        while (x % i == 0)
        {
            cout << i << " ";
            x = x / i;
        }
    }
}
int main()
{

    // cout << prime_no(303);
    // cout << endl
    //      << prime_no(311);
    prime_factor(555550);

    return 0;
}