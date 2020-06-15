#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
  set<char> s;
  string a;
  getline(cin, a);

  for (int i = 0; i < a.size(); i++)
    s.insert(a[i]);

  s.size() % 2 ? cout << "IGNORE HIM!" : cout << "CHAT WITH HER!";

  return 0;
}
