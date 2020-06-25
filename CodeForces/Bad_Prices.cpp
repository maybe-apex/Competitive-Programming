#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, min = 1e9;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = n; i >= 1; i--)
        {
            if (a[i] <= min)
                min = a[i];
            else
                count++;
        }
        cout << count << endl;
    }

    return 0;
}