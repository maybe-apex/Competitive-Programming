#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m = 0;
    cin >> n;
    string s, ans;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        switch (s[i])
        {
        case '2':
            ans += '2', m += 1;
            break;
        case '3':
            ans += '3', m += 1;
            break;
        case '4':
            ans += "322", m += 3;
            break;
        case '5':
            ans += '5', m += 1;
            break;
        case '6':
            ans += "53", m += 2;
            break;
        case '7':
            ans += '7', m += 1;
            break;
        case '8':
            ans += "7222", m += 4;
            break;
        case '9':
            ans += "7332", m += 4;
            break;
        default:
            break;
        }
        sort(ans.begin(), ans.end(), greater<char>());
    }
    cout << ans;

    return 0;
}