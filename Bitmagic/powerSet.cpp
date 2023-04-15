#include <bits/stdc++.h>
using namespace std;
// void powerSet(string s)
// {
//     // string sub=" ";
//     int n=s.length();
//     for(int i=0;i<pow(2,n);i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(i&(1<<j)!=0)
//             {
//                 // sub=sub+s[j];
//                 cout<<s[j];
//             }

//         }
//         // cout<<sub[i]<<".";
//         cout<<endl;
//     }

// }
void printPowerSet(string str)
{
    int n = str.length();

    int powSize = pow(2, n);

    for (int counter = 0; counter < powSize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((counter & (1 << j)) != 0)
                cout << str[j];
        }

        cout << endl;
    }
}

int main()
{
    string s = "abc";
    // powerSet(s);
    printPowerSet(s);
    return 0;
}