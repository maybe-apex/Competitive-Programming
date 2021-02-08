#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;
        cout << fixed << setprecision(8);
        cout << 1 / (tan(asin(1) / n)) << endl;
    }

    return 0;
}