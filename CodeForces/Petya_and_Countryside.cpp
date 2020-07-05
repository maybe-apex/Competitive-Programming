#include <iostream>

using namespace std;

int main()
{
    int n, sq = 0, mx = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] <= a[j + 1])
                sq++;
            else
                break;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] <= a[j - 1])
                sq++;
            else
                break;
        }
        mx = max(mx, sq + 1);
        sq = 0;
    }
    cout << mx;

    return 0;
}