#include <iostream>

using namespace std;

int main()
{

    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        if (m * m > n || n % 2 != m % 2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}