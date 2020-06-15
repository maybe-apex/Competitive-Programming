#include<iostream>

using namespace std;

int main(){

  int a[4],max=0,skp;

  for(int i = 0 ; i < 4 ; i ++)
  {
    cin >> a[i];
  }

  for(int i = 0 ; i < 4 ; i++)
  {
    if(a[i]>=max)
    {
      max=a[i];
      skp=i;
    }
  }

  for(int i = 0 ; i < 4 ; i++)
  if(i!=skp)
  cout << max-a[i] << " ";

  return 0;
}
