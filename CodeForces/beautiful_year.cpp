#include <iostream>

using namespace std;

int main(){

  int n,u,t,h,th,temp ;
  bool unique=0;
  cin >> n;

  while(unique!=1){

    n++;
    temp=n;
    th=temp/1000;
    temp-=th*1000;
    h=temp/100;
    temp-=h*100;
    t=temp/10;
    temp-=t*10;
    u=temp;

    if(th!=h)
    if(h!=t)
    if(t!=u)
    if(th!=t)
    if(th!=u)
    if(h!=u)
    {
      unique = true;
      break;
    }
  }

  cout << n;


  return 0;
}
