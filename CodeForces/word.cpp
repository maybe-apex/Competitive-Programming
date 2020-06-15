#include <iostream>
#include <string>

using namespace std;

int main(){

  int upper=0,lower=0;
  string s;

  getline(cin,s);

  for(int i = 0 ; i<s.size() ; i++)
  {
    if(s[i] >= 65 && s[i] <= 90)
      upper++;
    else
      lower++;
  }

  if(lower >= upper)
    for(int i = 0 ; i<s.size() ; i++)
      s[i] = tolower(s[i]);
  else
    for(int i = 0 ; i<s.size() ; i++)
      s[i] = toupper(s[i]);

  cout << s;

  return 0;
}
