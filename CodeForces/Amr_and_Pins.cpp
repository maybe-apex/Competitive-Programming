#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, x, y, x1, y1;
    cin >> r >> x >> y >> x1 >> y1;
    double d = sqrt(pow(abs(x - x1), 2) + pow(abs(y - y1), 2));
    cout << ceil(d / (2 * r));

    return 0;
}