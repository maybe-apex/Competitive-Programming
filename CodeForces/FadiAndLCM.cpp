#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    long long x;
    cin >> x;
    long long temp = 1;
    for (long long i = 1; i * i <= x; i++)
    {
        if (x % i == 0 && gcd(i, x / i) == 1)
            temp = i;
    }
    cout << temp << " " << x / temp << endl;
    return 0;
}