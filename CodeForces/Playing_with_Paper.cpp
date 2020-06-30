#include <iostream>

using namespace std;

int main()
{

    long long a, b;
    cin >> a >> b;
    long long x = 0;
    while (b)
    {
        x += a / b;
        a %= b;
        swap(a, b);
    }

    cout << x;
    return 0;
}