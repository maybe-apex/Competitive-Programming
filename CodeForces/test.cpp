#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    auto y = find(a.begin(), a.end(), 2);
    iter_swap(y, y - 1);
    // for (int i = 0; i < 3; i++)
    //     if (a[i] == 2)
    //     {
    //         a[i] = a[i] + a[i - 1];
    //         a[i - 1] = a[i] - a[i - 1];
    //         a[i] = a[i] - a[i - 1];
    //     }
    for (auto &i : a)
        cout << i << " ";

    return 0;
}