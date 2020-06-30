#include <iostream>

using namespace std;

int main()
{

    long long l, r;
    cin >> l >> r;
    if (l % 2)
        l++;
    if (l + 2 <= r)
        cout << l << " " << l + 1 << " " << l + 2;
    else
    {
        cout << -1;
    }

    return 0;
}