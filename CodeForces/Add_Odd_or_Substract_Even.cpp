#include <iostream>

using namespace std;

int main()
{

    int n, x = 0;
    cin >> n;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        if (b > a)
            b - a & 1 ? x = 1 : x = 2;
        if (b < a)
            b - a & 1 ? x = 2 : x = 1;
        if (a == b)
            x = 0;
        cout << x << endl;
    }

    return 0;
}