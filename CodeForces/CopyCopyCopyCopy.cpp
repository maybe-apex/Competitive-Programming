#include <iostream>
#include <set>
// #include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, a;
        cin >> n;
        set<int> b;
        while (n--)
        {
            cin >> a;
            b.insert(a);
        }
        cout << b.size() << endl;
    }

    return 0;
}
