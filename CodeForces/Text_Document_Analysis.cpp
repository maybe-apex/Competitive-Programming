#include <iostream>

using namespace std;

int main()
{

    int n, x = 0, y = 0, mxy = -1, mxx = -1;
    string s;
    cin >> n >> s;

    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] == '_')
        {
            cout << i << endl;
            while (s[i + 1] != '_' && i < s.size())
            {
                i++;
                if (s[i] == '(' || s[i] == ')')
                {
                    while (s[i + i] != ')' && i <= s.size())
                    {
                        i++;
                        y++;
                    }
                    mxy = max(y, mxy);
                    y = 0;
                }
                cout << s[i] << " ";
                x++;
            }
            cout << endl
                 << mxx << " ";
            mxx = max(x, mxx);
            x = 0;
        }
    }
    return 0;
}