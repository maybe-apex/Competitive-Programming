// video tutorial https : //www.youtube.com/watch?v=krjPGMdbcqE&feature=youtu.be
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, ans = 0;
        cin >> n >> k;
        int a[n], b[k];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < k; i++)
            cin >> b[i];
        sort(a, a + n, greater<long long>());
        sort(b, b + k);
        int ind = k - 1; // why is ind not initialized to k-1 instead of 0 ? //
        for (int i = 0; i < k; i++)
        {
            if (b[i] != 1)
            {
                ind += b[i] - 1;
                ans += a[i] + a[ind];
            }
            else
            {
                ans += 2 * a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}