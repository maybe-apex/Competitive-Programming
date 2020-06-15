#include <iostream>

using namespace std;

int main(){

  int a[1000],n,score=0;

  cin >> n;

  for(int i = 0 ; i < n ; i++)
  cin >> a[i];

  int min = a[0],max=a[0];

  for(int i = 0 ; i < n ; i++){
  if(a[i]>max && i>0)
  {
    max=a[i];
    score++;
    // cout << "max : " << a[i] << endl;
  }
  if(a[i]<min && i>0)
  {
    min=a[i];
    score++;
    // cout << "min : " << a[i] << endl;
  }
}

  cout << score;

  return 0;
}
