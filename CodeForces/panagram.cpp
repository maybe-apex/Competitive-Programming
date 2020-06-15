#include <iostream>
#include <string>

using namespace std;

int main(){

  string s,r;
  bool invalid=0;
  int count=0,n;

  cin >> n;
  getline(cin,r);
  getline(cin,s);

  for(int i = 0 ; i < n ; i ++)
  {
    if(s[i] <= 90 && s[i] >= 65)
    s[i] = tolower(s[i]);
  }

  // cout << s;

  for(char i = 'a' ; i <= 'z' ; i++)
  {
    // cout << "Loop 1 \t" << i << endl;
    for(int j = 0 ; j < n ; j++)
    {
      // cout << "comparing " << i << " with " << s[j] << " count is " << count << " j is " << j << endl;
      // cout << "Loop 2" << endl;
      if(i == s[j])
      {
      count++;
      }

      if(count == 0 && j==n-1)
      {
        // cout << "executing fail \n";
        invalid = 1;
        break;
      }
    }
    if(invalid)
    {
      cout << "NO";
      break;
    }
    else
    count=0;
  }

  if(!invalid)
  cout << "YES";

  return 0;
}
