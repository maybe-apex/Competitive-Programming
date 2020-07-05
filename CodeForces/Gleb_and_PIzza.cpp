#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int r, d, count = 0;
    cin >> r >> d;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y, s;
        cin >> x >> y >> s;
        if (sqrt(x * x + y * y) - s >= r - d && sqrt(x * x + y * y) + s <= r)
            count++;
    }
    cout << count;

    return 0;
}