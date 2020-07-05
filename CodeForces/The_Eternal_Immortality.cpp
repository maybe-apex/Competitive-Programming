#include <iostream>

using namespace std;

int main()
{
    long long a, b, x = 1, c = 0;
    cin >> a >> b;
    for (long long i = a + 1; i <= b && c++ < 10; i++)
        x *= i % 10;
    cout << x % 10;
    return 0;
}