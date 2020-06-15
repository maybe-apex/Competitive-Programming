#include<iostream>

using namespace std;

int main(){

  int a,b,c,d;

  cin >> a >> b >> c >> d;

  int s = {a,b,c,d};

  cout << 4-s.size();

  return 0;
}
