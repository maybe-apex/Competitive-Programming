#include <iostream>

using namespace std;

int main()
{

    int n, sum = 0, best = 0, x = 1;
    cin >> n;
    int a[1000000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i + 1] > a[i] ? x += 1 : x = 1;
        best = max(best, x);
    }
    cout << best;
    // cout << a[n];
    return 0;
}