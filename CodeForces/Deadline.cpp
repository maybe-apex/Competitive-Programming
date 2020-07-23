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
        double n, d;
        cin >> n >> d;
        if (n >= d)
            cout << "YES\n";
        else
        {
            for (int i = 1; i < (int)sqrt(d); i++)
            {
                if (ceil(i + d / (i + 1)) <= n)
                {
                    done = true, cout << "YES" << endl;
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