#include <iostream>

using namespace std;

int main()
{

  int n, a[100], max = 0, min = 100, s = 0, pmax, pmin;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] > max)
    {
      max = a[i];
      pmax = i;
    }
    if (a[i] <= min)
    {
      min = a[i];
      pmin = i;
    }
  }

  int j = pmax;
  while (a[0] != max)
  {
    int temp = a[j - 1];
    a[j - 1] = a[j];
    a[j] = temp;
    j--;
    s++;
  }

  int k = pmin;
  if (pmax > pmin)
    k++;

  while (a[n - 1] != min)
  {
    int temp = a[k + 1];
    a[k + 1] = a[k];
    a[k] = temp;
    k++;
    s++;
  }

  cout << s;

  return 0;
}
