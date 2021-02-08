#include <bits/stdc++.h>

using namespace std;

// Mathematical Solution

int main()
{
    long long t, n, g, b;
    cin >> t;
    while (t-- && cin >> n >> g >> b)
    {
        int G = (n + 1) / 2;
        cout << max((G - 1) / g * (g + b) + (G - 1) % g + 1, n) << endl;
    }

    return 0;
}

// Tutorial Solution

// int main()
// {
//     long long t, n, g, b;
//     cin >> t;
//     while (t-- && cin >> n >> g >> b)
//     {
//         long long needG = ceil(n / 2);
//         long long totalG = needG / g * (g + b);
//         if (totalG % g)
//             totalG += totalG % g;
//         else
//             totalG -= b;
//         cout << max(n, totalG) << endl;
//     }

//     return 0;
// }