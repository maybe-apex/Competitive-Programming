#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char x;
        int count = 0;
        for (int i = 0; i < s.size() - 2; i++)
        {
            if (count < 1)
                if (s[i] != s[i + 1])
                    count++, x = s[i + 1];
            if (count >= 1)
                if (s[i] != x)
                    count++;
        }
        cout << (count > 1 ? count - 1 : 0);
        cout << endl;
    }
    return 0;
}