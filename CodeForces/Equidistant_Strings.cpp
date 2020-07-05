#include <iostream>

using namespace std;

int main()
{
    string s, t;
    int x = 0, b[100000], k = 1;
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i] && k)
            b[i] = s[i] == '0' ? 0 : 1, x++, k = 1 - k;
        else if (s[i] != t[i] && !k)
            b[i] = t[i] == '0' ? 0 : 1, x++, k = 1 - k;
        else
            b[i] = s[i] == '0' ? 0 : 1;
    }
    if (x & 1)
        return cout << "impossible", 0;
    else
        for (int i = 0; i < s.size(); i++)
            cout << b[i];

    return 0;
}