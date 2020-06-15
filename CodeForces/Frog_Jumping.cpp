#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, k, x = 0, p = 0;
        cin >> a >> b >> k;
        int evn = ceil((float)k / 2);
        int odd = k - evn;
        p += evn * a - odd * b;
        cout << p << endl;
    }

    return 0;
}