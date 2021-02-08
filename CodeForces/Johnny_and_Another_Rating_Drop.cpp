#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int64_t n, u = 0;
        cin >> n;
        for (; n; n >>= 1)
        {
            u += n;
        }
        cout << u << endl;
    }

    return 0;
}

/*
#include <bits/stdc++.h>
int main()
{
    using namespace std;
    int T;
    cin >> T;
    while (T--)
    {
        int64_t N;
        cin >> N;
        int64_t ans = 0;
        for (; N; N >>= 1)
            ans += N;
        cout << ans << '\n';
    }
}
*/