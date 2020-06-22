#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, x, a[100000];
        cin >> n >> x;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        float avg, sum = 0;
        for (i = 0; i < n; i++)
        {
            sum += a[i];
            avg = sum / (i + 1);
            if (avg < x)
                break;
        }
        cout << i << endl;
    }

    return 0;
}