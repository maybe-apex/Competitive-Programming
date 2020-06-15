#include <iostream>
#include <string>

using namespace std;

int main (){

  string q,w;
  int n,t;

  // cout << "Getting n : ";
  cin >> n;
  // cout << "\n Getting t : ";
  cin >> t;
  // cout << "\n Getting the string : ";
  getline(cin,w);
  getline(cin,q);

  for(int i = 0 ; i < t ; i++)
  {
    for(int j = 0 ; j < n ; j++)
    {
      if(q[j-1]=='B' && q[j]=='G')
      {
        char temp = q[j-1];
        q[j-1] = q[j];
        q[j] = temp;
        // cout << "the string now is : " << q << endl;
        j+=1;
      }
    }
  }

  cout << q;

  return 0;
}
