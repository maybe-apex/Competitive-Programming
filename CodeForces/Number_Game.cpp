#include <bits/stdc++.h>

using namespace std;

bool isprime(int x)
{
    for (int i = 2; i < sqrt(x); i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n != 2 && (((n & (n - 1)) == 0) || (!(n & 1) && isprime(n / 2))))
            cout << "FastestFinger\n";
        else
            cout << "Ashishgup\n";
    }
}