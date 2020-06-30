#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int i = c == 0 ? 0 : (b - a) / c;
    cout << (a + i * c == b && i >= 0 ? "YES" : "NO");

    return 0;
}