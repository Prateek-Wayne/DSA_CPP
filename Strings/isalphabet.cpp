#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s1 = "aacdb";
    string s2 = "gafd";
    string s = s1 + s2;
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }
    cout << s << endl;
    for (int i = 0; i< 26; i++)
        cout << arr[i];
    return 0;
}