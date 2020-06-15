#include <iostream>
using namespace std;
int main()
{
    int a, b, c, m, n;
    cin >> a >> b >> c;
    if (a > b)
        m = max(a, c);
    else
        m = max(b, c);

    if (a > b)
        n = min(b, c);
    else
        n = min(a, c);

    cout << m - n;
}