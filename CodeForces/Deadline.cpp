#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int t;
    bool done = false;
    cin >> t;
    while (t--)
    {
        float n, d;
        cin >> n >> d;
        if (n >= d)
            cout << "YES\n";
        else
        {
            for (int i = 1; i < d; i++)
            {
                if (i + ceil(d / (i + 1)) <= n)
                {
                    done = true, cout << "YES\n";
                    break;
                }
            }
            if (!done)
                cout << "NO\n";
            done = false;
        }
    }

    return 0;
}