#include <iostream>

using namespace std;

int main()
{
    int n, t = 0;
    int a = n;
    cin >> n;
    int x, s = 0;
    while (n--)
    {
        cin >> x;
        if (x == 100)
            t++;
        else
            s++;
    }
    if (s & 1)
        return cout << (t % 2 == 0 && t > 1 ? "YES" : "NO"), 0;
    return cout << (t % 2 == 0 ? "YES" : "NO"), 0;
    return 0;
}