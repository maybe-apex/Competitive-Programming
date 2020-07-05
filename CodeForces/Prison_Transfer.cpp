#include <iostream>

using namespace std;

int main()
{
    int n, t, c, x = 0;
    cin >> n >> t >> c;
    int a[n], k = 1;
    a[0] = -1;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp > t)
            a[k++] = i;
    }
    a[k++] = n;
    // for (int i = 0; i < k; i++)
    //     cout << a[i] << endl;
    for (int i = 1; i < k; i++)
    {
        int diff = a[i] - a[i - 1] - 1;
        x += max(diff - c + 1, 0);
        // cout << "added " << max(diff - c + 1, 0) << endl;
    }
    cout << x;

    return 0;
}