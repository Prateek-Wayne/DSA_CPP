#include <bits/stdc++.h>

using namespace std;
int main()
{
    /*lowerbound is like find() function
          (i).it return number if it is present .
         (ii).it return number just greater than key if it is not present.
        (iii).if key is greater than the greatest number in container and it is not present then it points to end().

    */
    /*upperbound is like find() function
         (i).it return number just greater than key if it is present .
        (ii).it return number just greater than key if it is not present.(similar (i) & (ii))
       (iii).if key is greater than the greatest number in container and it is not present then it points to end().

   */
    vector<int> v1{10, 20, 30, 40, 3, 23};
    auto l = lower_bound(v1.begin(), v1.end(), 30);
    cout << *l << endl;
    auto u = upper_bound(v1.begin(), v1.end(), 20);
    cout << *u << endl;
   

    return 0;

    

}