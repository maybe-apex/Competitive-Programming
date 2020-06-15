#include <iostream>

using namespace std;

int main()
{

    int n, a[20000], k, m = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= 5 - k)
            m++;
    }

    cout << m / 3;

    return 0;
}