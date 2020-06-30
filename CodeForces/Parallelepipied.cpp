#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, ans = 0;
    cin >> a >> b >> c;
    int x = sqrt(a * b * c);
    ans += x / a;
    ans += x / b;
    ans += x / c;
    cout << 4 * ans;

    return 0;
}