#include <bits/stdc++.h>
using namespace std;
int Search1(string S, string P)
{
    int LS = S.length();
    int LP = P.length();
    int max = LS - LP + 1;
    for (int i = 0; i < max; i++)
    {
        bool flag = true;
        for (int j = 0; j < LP && flag == true; j++)
        {
            if (P[j] != S[i + j - 1])
                flag = false;
        }
        if (flag == true)
            return i;
    }
    return -1;
}
int main()
{

    string S = "Hello World";
    string P = "o";

    cout << Search1(S, P);

    return 0;
}