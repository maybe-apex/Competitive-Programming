#include <iostream>

using namespace std;

int main()
{
    int n, s = 0, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        ans = max(s, ans);
    }
    cout << ans;
}