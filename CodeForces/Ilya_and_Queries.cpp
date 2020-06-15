#include <iostream>

using namespace std;

int main()
{
    string s;
    int t, l, r;
    cin >> s >> t;
    int a[100005];
    a[0] = 0;
    for (int i = 0; i < s.size(); i++)
    {
        a[i + 1] = a[i] + (s[i] == s[i + 1]);
    }
    for (int i = 1; i <= t; i++)
    {
        cin >> l >> r;
        cout << a[r - 1] - a[l - 1] << endl;
    }

    return 0;
}