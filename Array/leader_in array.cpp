#include <iostream>
#include<vector>

using namespace std;
void
leader (vector < int >v)
{
  int n = v.size ();
  int current = v[n - 1];
  cout << "|"<<current << "|";
  for (int i = n - 2; i >= 0; i--)
    {
      if (current < v[i])
	{
	  current = v[i];
	  cout << current << "|";

	}
    }
}

int
main ()
{
//   cout << "Hello World";
     vector<int> v{7,10,4,3,6,5,2};
     leader(v);

  return 0;
}