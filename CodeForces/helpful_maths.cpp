#include <iostream>

using namespace std;

int main()
{
  string s;
  getline(cin, s);
  for (int i = 0; i < s.size(); i += 2)
  {
    for (int j = 0; j < s.size(); j += 2)
    {
      if (s[i] < s[j])
        swap(s[i], s[j]);
    }
  }
  cout << s;

  return 0;
}
