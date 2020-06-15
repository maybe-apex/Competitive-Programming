#include <iostream>

using namespace std;

int main(){

  int one=1,five=5,ten=10,twenty=20,hundred=100;
  int n;
  cin >> n;

  hundred=n/100;
  twenty=(n-hundred*100)/20;
  ten=(n-hundred*100-twenty*20)/10;
  five=(n-hundred*100-twenty*20-ten*10)/5;
  one=(n-hundred*100-twenty*20-ten*10-five*5);

  cout << hundred+twenty+ten+five+one;


  return 0;
}
