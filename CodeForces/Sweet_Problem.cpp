#include <iostream>
#include <algorithm>

using namespace std;

// Efficient

int main()
{
    int t;
    cin >> t;
    int r, g, b;
    while (t--)
    {
        cin >> r >> g >> b;
        int s = r + g + b;
        int m = max(r, max(g, b));
        cout << (s > 2 * m ? s / 2 : s - m) << endl;
    }
    return 0;
}

// Calculative

// int main()
// {
//     long long t, count = 0;
//     cin >> t;
//     while (t--)
//     {
//         long long c[3];
//         cin >> c[0] >> c[1] >> c[2];
//         sort(c, c + 3);
//         while (c[0] != 0)
//         {
//             c[0]--;
//             c[2]--;
//             sort(c, c + 3);
//             count++;
//         }
//         cout << min(c[1], c[2]) + count << endl;
//         count = 0;
//         // cout << min(c[2], c[0] + c[1]) << endl;
//     }

//     return 0;
// }