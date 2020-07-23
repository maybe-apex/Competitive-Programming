#include <iostream>

using namespace std;

int main()
{
    bool inside = false;
    int n, mxout = 0, count = 0, mxin = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            count = 0, inside = true;
        if (s[i] == ')')
            count = 0, inside = false;
        if (s[i] == '_')
            count = 0;
        count++;
        inside ? mxin = max(mxin, count) : mxout = max(mxout, count);
    }
    cout << mxout << " " << mxin;
    return 0;
}