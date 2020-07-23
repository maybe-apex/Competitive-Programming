#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, x = 0;
    cin >> a >> b;
    while (b > a)
    {
        b % 2 ? b++ : b /= 2;
        x++;
    }
    cout << x + a - b;
    return 0;
}