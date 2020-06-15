#include <iostream>

using namespace std;

int main(){

  int a,b,problem=0,i=1,time;

  cin >> a >> b;

  int limit = 60*4-b;

  // cout << limit << endl;

  do
  {
    time=time+(i*5);
    if(time<=limit)
    problem++;
    // cout << time << endl;
    i++;
  }
  while(time<=limit);

  cout << min(problem,a);

  return 0;
}
