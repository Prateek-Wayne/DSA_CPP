#include <bits/stdc++.h>
using namespace std;
bool Search(string S, string P)
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
            return true;
    }
    return false;
}
vector<string> stringMatching(vector<string> words)
{
    vector<string> ans;
    for (int i = 0; i < words.size(); i =i+2)
    {
        if (Search(words[i], words[i + 1]) || Search(words[i+1], words[i ]))
            ans.push_back(words[i + 1]);
    }
    return ans;
}

int main()
{   vector<string> words = {"mass","as","superhero","hero"};
    vector<string> ans=stringMatching(words);
    for(auto i:ans)
        cout<<i;
    return 0;
}