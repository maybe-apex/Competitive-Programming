#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        array<int, 27> x{};
        string a, b;
        cin >> a >> b;
        for (auto i : a)
            x[i - 'a']++;
        for (auto i : b)
            x[i - 'a']--;
        bool fine = true;
        for (int i = 0; i < 27; i++)
        {
            if (x[i] < 0 || x[i] % k)
                fine = false;
            x[i + 1] += x[i];
        }
        cout << (fine ? "Yes" : "No") << endl;
    }

    return 0;
}