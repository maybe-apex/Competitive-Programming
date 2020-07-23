#include <iostream>

using namespace std;

long long work(long long a, long long b)
{
    if (a == 0 || b == 0)
        return cout << a << " " << b, 0;

    if (a >= 2 * b)
    {
        a %= 2 * b;
        work(a, b);
    }
    else if (b >= 2 * a)
    {
        b %= 2 * a;
        work(a, b);
    }
    else
    {
        return cout << a << " " << b, 0;
    }
}

int main()
{
    long long a, b;
    cin >> a >> b;
    work(a, b);
    return 0;
}