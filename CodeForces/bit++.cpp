#include <iostream>
#include <string>

using namespace std;

int main(){

  int n,x=0;
  cin >> n;

  for(int i = 0 ; i <= n ; i++)
  {
    string s;
    getline(cin,s);
    if(s[0]=='+' || s[2] =='+')
    x++;
    if(s[0]=='-' || s[2] =='-')
    x--;
  }

  cout << x;

  return 0;
}
