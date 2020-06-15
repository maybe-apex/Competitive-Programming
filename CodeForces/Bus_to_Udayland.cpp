#include <iostream>

using namespace std;

int main()
{

    int n, i = 0, m = 0, p;
    bool done = false;
    char a[1000], b[1000], c[1000], d[1000], e[1000];
    cin >> n;

    while (n--)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i];
        if (a[i] == b[i] && a[i] == 'O' && !done)
        {
            a[i] = b[i] = '+';
            done = true;
        }

        if (e[i] == d[i] && e[i] == 'O' && !done)
        {
            e[i] = d[i] = '+';
            done = true;
        }
        i++;
        m++;
    }

    if (done)
    {
        cout << "YES" << endl;
        for (int i = 0; i < m; i++)
        {
            cout << a[i] << b[i] << c[i] << d[i] << e[i] << endl;
        }
    }
    else
    {
        cout << "NO";
    }

    return 0;
}