#include <iostream>

using namespace std;

int main(){

  int n,i,o,p=0,r=0;

  cin >> n;

  for(int j = 0 ; j < n ; j++)
  {
    cin >> o >> i;
    r = max(r,p+i-o);
    p+=i-o;
  }

  cout << r;
}
