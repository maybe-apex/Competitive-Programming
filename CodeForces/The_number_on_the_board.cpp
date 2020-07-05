#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    string n;
    cin >> k >> n;
    int x = 0, l = 0, a[n.size()];
    for (int i = 0; i < n.size(); i++)
    {
        x += n[i] - 48;
        a[l++] = 9 - (n[i] - 48);
    }
    if (x >= k)
        return cout << "0", 0;
    int diff = k - x;
    sort(a, a + l, greater<int>());
    int t = 0;
    for (int i = 0; i < l; i++)
    {
        t += a[i];
        if (t >= diff)
        {
            cout << i + 1;
            break;
        }
    }
    return 0;
}