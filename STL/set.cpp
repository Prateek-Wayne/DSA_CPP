#include <iostream>
#include <set>
using namespace std;
int main()
{
    // set<int, greater<int>> s1;
    set<int> s1;
    s1.insert(10);
    s1.insert(5);
    s1.insert(6);
    s1.insert(1);
    s1.insert(6);
    for (auto i : s1)
    {
        cout << i << " ";
    }
    // ........................................
    auto it = s1.find(3);
    if (it == s1.end())
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    // ........................................
    // while (it != s1.end())
    // {
    //     cout << *it << ".";
    //     it++;
    // }
    // ........................................
    cout<<s1.count(1);//return number of times a value present in a container;
                      //can be used in place of find in case of sets
    
    
}