#include<iostream>

using namespace std;

int main(){

  int n,k,score,x=1,count=0;
  cin >> n >> k;

  for(int i=1 ; i <= n ; i++)
  {
    cin >> score;
    if(i==k && score >=1)
    x=score;
    if(score>=x)
    count++;
  }

  cout << count;

  return 0;
}
