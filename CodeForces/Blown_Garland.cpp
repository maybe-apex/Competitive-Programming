#include <iostream>
using namespace std;
int main()
{
    int a[5] = {0}, b[200];
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        s[i] == '!' ? a[i % 4]++ : b[s[i]] = i % 4;
    cout << a[b['R']] << " " << a[b['B']] << " " << a[b['Y']] << " " << a[b['G']];
    return 0;
}