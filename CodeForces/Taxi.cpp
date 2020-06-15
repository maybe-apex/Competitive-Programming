#include <iostream>

using namespace std;
int a[5];
int main()
{
    int n, b, cars = 0;
    cin >> n;
    while (n--)
    {
        cin >> b;
        a[b]++;
    }
    cars += a[4];
    int t = min(a[1], a[3]);
    cars += t;
    a[1] -= t;
    a[3] -= t;
    cars += a[3];
    cars += a[2] / 2;
    a[1] += (a[2] % 2) * 2;
    cars += (a[1] + 3) / 4;
    cout << cars;

    return 0;
}