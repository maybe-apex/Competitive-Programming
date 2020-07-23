#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a[1005] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    for (int i = 0; i < 1001; i++)
    {
        if (a[i] > (n + 1) / 2)
            return cout << "NO", 0;
    }
    cout << "YES";

    return 0;
}