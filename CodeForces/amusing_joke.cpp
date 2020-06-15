#include <iostream>

using namespace std;

int main(){

  string f,s,r,b;
  char a[1000][1000],temp;

  getline(cin,f);
  getline(cin,s);
  getline(cin,r);

  for(int i = 0 ; i < f.size() ; i++)
  {
    b.push_back(f[i]);
  }

  for(int i = 0 ; i < s.size() ; i++)
  {
    b.push_back(s[i]);
  }

  for(int i = 0 ; i < b.size() ; i++)
  {
    for(int j = 0 ; j < b.size() ; j++)
    b[j]>b[j+1] ? temp = b[j] , b[j] = b[j+1] , b[j+1] = temp : 0 ;
  }

  for(int i = 0 ; i < r.size() ; i++)
  {
    for(int j = 0 ; j < r.size() ; j++)
    r[j]>r[j+1] ? temp = r[j] , r[j] = r[j+1] , r[j+1] = temp : 0 ;
  }

  b==r ? cout <<"YES" : cout <<"NO";
  // cout << endl << b << endl << r;


  return 0;
}
