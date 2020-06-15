#include <iostream>

using namespace std;

int next_unique(int n){

  int u,t,h,th,temp ;
  bool unique=0;
  // cin >> n;

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

  return n;

}

int main(){

  int y=0,difference=0,dmax=0,ystart,yend;

  for(y = 0 ; y < 9999 ; y++ )
  {
    difference = next_unique(y) - y;
    if(difference > dmax)
    {
      dmax = difference;
      ystart = y;
      yend = next_unique(y);
    }
  }

  cout << dmax << "\t" << ystart << "\t" << yend;
  return 0;
}
