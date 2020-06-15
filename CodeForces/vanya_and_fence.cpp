#include <iostream>

using namespace std;

int main(){

   int n,h,x,r=0;

   cin >> n >> h;

   for(int i = 0 ; i < n ; i++)
   {
     cin >> x;
     if(x>h)
     r+=2;
     else
     r++;
   }

   cout << r;

  return 0;
}
