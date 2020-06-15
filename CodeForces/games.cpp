#include <iostream>

using namespace std;

int main(){

  int n,t[100][100],r=0;

  cin >> n;

  for(int i = 0 ; i < n ; i ++)
  {
    cin >> t[i][0];
    cin >> t[i][1];
  }

  for(int i = 0 ; i < n ; i++)
  {
    for(int j = 0 ; j < n ; j++)
    {
      if(t[i][0]==t[j][1])
      r++;
    }
  }

  cout << r;

  return 0;
}
