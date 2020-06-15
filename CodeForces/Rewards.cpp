#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a, b, c, x, y, z, n;
    cin >> a >> b >> c >> x >> y >> z >> n;

    n -= ceil((a + b + c) / 5) + ceil((x + y + z) / 10);
    n >= 0 ? cout << "YES" : cout << "NO";

    return 0;
}