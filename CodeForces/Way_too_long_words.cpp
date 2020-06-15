#include <iostream>
#include <string>

using namespace std;

int main(){

int n,count=0;
string s,r;

cin >> n;

while(n>=0){

	count=0;
  getline(cin,s);

  for(int i = 0 ; s[i]!=0 ; i++)
  {
    count++;
  }

  count = count-2;

	if(count>8)
  r += s[0] + to_string(count) + s[count+1] + "\n";
  else
  r += s + "\n";

  // cout << n;
  n--;
}

cout << r;

  return 0;
}
