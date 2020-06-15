#include <iostream>

using namespace std;

int main(){

  int n,p,a[10000],x=0,q,j;
  bool broke=1;

  cin >> n;
  cin >> p;
  for(int i = 0 ; i < p ; i++)
  {
    cin >> a[i];
  }
  cin >> q;
  for(int i = 0 ; i < q ; i++)
  {
    cin >> a[p+i];
  }

  for(int i = 1 ; i <= n ; i ++)
  {
    for( j = 0 ; j < p+q ; j++)
    {
    if(i==a[j])
    x++;
    if(x==0 && j==p+q-1)
    {
      broke = 1;
      break;
    }
    if(x!=0 && j==p+q-1)
    broke=0;
    }
    if(broke==1 && j==p+q-1)
    break;
    else
    x=0;
  }

  if(!broke)
  cout << "I become the guy.";
  else
  cout << "Oh, my keyboard!";

  return 0;
}
