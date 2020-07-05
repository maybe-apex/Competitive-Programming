#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int n, l[100010], r[100010], L = 0, R = 0, ans = 0, k = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> l[i] >> r[i];
        L += l[i];
        R += r[i];
    }
    ans = abs(L - R);
    for (int i = 1; i <= n; i++)
    {
        if (abs((L - l[i] + r[i]) - (R - r[i] + l[i])) > ans)
        {
            ans = abs((L - l[i] + r[i]) - (R - r[i] + l[i]));
            k = i;
        }
    }
    cout << k;

    return 0;
}