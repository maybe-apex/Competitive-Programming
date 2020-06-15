#include <iostream>
#include <string>
using namespace std;

int main()
{

    int a, b, c, d, x = 0;
    string s, v;
    cin >> a >> b >> c >> d;
    getline(cin, v);
    getline(cin, s);
    // cout << s << endl;
    for (int i = 0; i < s.size(); i++)
    {
        // cout << "first" << endl;
        if (s[i] == '1')
            x += a;
        if (s[i] == '2')
            x += b;
        if (s[i] == '3')
            x += c;
        if (s[i] == '4')
            x += d;
    }
    cout << x;
    return 0;
}