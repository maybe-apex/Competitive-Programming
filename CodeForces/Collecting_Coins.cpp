#include <iostream>

using namespace std;

int main()
{

    int n;

    cin >> n;

    while (n--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int top = max(max(a, b), c);
        // int x = abs(top - a) + abs(top - b) + abs(top - c);
        int x = a + b + c - top;
        int y = 2 * top - x;
        n -= y;
        if (n % 3 == 0 && n >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}