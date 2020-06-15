#include <iostream>

using namespace std;

int main(){

  int n,a[100000],group=1;

  cin >> n;

  for(int i = 0 ; i < n ; i++)
  {
    cin >> a[i];
    if(a[i]!=a[i-1] && i>=1)
    {
      group++;
    }
  }

  cout << group;

  return 0;
}
