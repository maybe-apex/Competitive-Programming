#include <iostream>
#include <string>

using namespace std;

int main(){

  int n,x=0,y=1;

  cin >> n;

  for(int i = 0 ; i < n ; i++)
  {
    if(!(i%2))
    {
      cout << "I hate";
    }
    x=1-x;
    if(x && i!=n-1)
    cout << " that ";
    if(i%2)
    {
      cout << "I love";
    }
    y=1-y;
    if(y && i!=n-1)
    cout << " that ";
    if(i==n-1)
    cout << " it";
  }

  return 0;
}
