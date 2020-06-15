#include <iostream>

using namespace std;

int main()
{

    int t, n, p, i, s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        p = n;
        s = 0;
        i = 1;
        while (p)
        {
            p % 10 ? s++ : 0;
            p /= 10;
        }
        cout << s << endl;
        while (n)
        {
            if (n % 10)
                cout << (n % 10) * i << " ";
            n /= 10;
            i *= 10;
        }
        cout << endl;
    }

    return 0;
}