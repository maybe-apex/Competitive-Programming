#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  int a[1000], n, d = 1, b[100], k = 0, temp = 0, digits = 0;
  string s, space = " ";

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    for (int p = a[i]; p != 0; p /= 10)
    {
      digits++;
    }
    // cout << "digits is : " << digits << endl;
    for (int j = 1; j < pow(10, digits + i + 1); j *= 10)
    {
      d = a[i] % j;
      // cout << "d is : " << d << endl;
      if (d != 0)
      {
        b[k] = d - temp;
        k++;
      }
      temp = d;
    }
    // cout << k << endl;
    // cout << digits < < endl;
    for (int z = 1; z <= digits; z++)
    {
      if (b[k - z] != 0)
        cout << b[k - z] << " ";
    }
    digits = 0;
  }

  // for(int i = 0 ; i< k ; i++)
  // cout << b[i] << "\t" ;
  // return 0;
}
