#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

  int n,m,l=0,k=0;
  int s[100];

  cin >> n >> m;

  for(int i = 1 ; i <= n ; i*=10)
  {
    l++;
  }

  // cout << l;

  for(int i = pow(10,l) ; i > 1 ; i/=10)
  {
    if(n/i == m/i)
    {
      cout << "same position " << k << " digit : " << n/i << "\t" << m/i << endl;
      s[k] = 1;
      k++;
    }
    else
    {
      cout << "different position " << k << " digit : " << n/i << "\t" << m/i << endl;
      s[k] = 0;
      k++;
    }
  }

  // cout << s;

  return 0;
}
