#include <iostream>

using namespace std;

int main(){

  int a,b,n=0;

  cin >> a >> b;

  for(int i = 0 ; i < 100 ; i++)
  {
    a*=3;
    b*=2;
    n++;
    if(a>b)
    break;
  }

  cout << n;

  return 0;
}
