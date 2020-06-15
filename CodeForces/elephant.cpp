#include <iostream>

using namespace std;

int main(){

  int n,s=0;

  cin >> n;

  while(n!=0)
  {
    if(n>5)
    {
      n-=5;
      s++;
    }
    if(n<=5)
    {
      n=0;
      s++;
    }
  }

  cout << s;

  return 0;
}
