#include <iostream>

using namespace std;

int main()
{
    int n, s = 1, c = 0, m = -1;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        if (a > m)
            m = a, s = 1, c = 0;
        if (a == m)
            c++;
        else
            c = 0;
        s = max(s, c);
    }
    cout << s;
    return 0;
}