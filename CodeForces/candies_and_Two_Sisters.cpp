#include <iostream>

using namespace std;

int main(){

  int a[10000],n;

  cin >> n;

  for(int i = 0 ; i < n ; i++)
  {
    cin >> a[i];
  }

  int i=0;
  while(i < n){
    a[i]%2==0 ? cout << a[i]/2-1 << endl : cout << a[i]/2 << endl ;
    i++;
  }

  return 0;
}
