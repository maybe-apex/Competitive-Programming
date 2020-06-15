#include <iostream>
#include <string>

using namespace std;

int main(){

  string i,o;
  int l=0;
  getline(cin,i);

  for(int x = 0 ; i[x] == 0 ; x++ )
  {
    l++;
  }

  for(int x = 0 ; x < l ; x++ )
  {
    o[x] = i[l-x];
  }

  cout << o;


  return 0;
}
