#include <iostream>

using namespace std;

int main(){

  int n,o,t,a=0;

  cin >> n;

  for(int i = 0 ; i < n ; i++)
  {
    cin >> o >> t;
    if(t-o >= 2)
    a++;
  }

  cout << a;

  return 0;
}
