#include <iostream>

using namespace std;

int main()
{

    int n, t;
    cin >> n;

    while (n--)
    {
        cin >> t;
        if (t % 4 == 0)
        {
            cout << "YES\n";
            for (int i = 1; i <= t / 2; i++)
            {
                cout << 2 * i << " ";
            }
            for (int i = 1; i < t / 2; i++)
            {
                cout << 2 * i - 1 << " ";
            }
            cout << t + t / 2 - 1 << endl;
        }
        else
            cout << "NO\n";
    }

    return 0;
}