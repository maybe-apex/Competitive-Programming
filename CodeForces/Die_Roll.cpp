#include <iostream>
#include <numeric>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{

    int a, b, x = 0;
    cin >> a >> b;

    x += 7 - max(a, b);
    cout << x / gcd(x, 6) << "/" << 6 / gcd(x, 6);

    return 0;
}