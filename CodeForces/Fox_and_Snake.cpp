#include <iostream>

using namespace std;

int main(){

  int n,m,x=1,k=1;

  cin >> n >> m;

  for(int i = 1 ; i <= n ; i++)
  {
    if(i%2!=0)
    {
      for( int j = 1 ; j <= m ; j++)
      cout << "#";
    }
    if(i%2==0)
    {
      if(x)
      {
        for(k = 1 ; k <= m-1 ; k++)
        cout << ".";
      }
      if(x && k==m)
      {
        cout << "#";
      }
      if(!x && k==1)
      cout << "#";
      if(!x)
      {
        for(k = 1 ; k <= m-1 ; k++)
        cout << ".";
      }
      x=1-x;
      k=1;
    }
    cout << endl;
  }


  return 0;
}
