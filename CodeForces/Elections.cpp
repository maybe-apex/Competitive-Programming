#include <iostream>
using namespace std;
int n, m, d[102], k[102];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int s = -1, t = 0;
        for (int j = 1; j <= n; j++)
        {
            cin >> k[j];
            if (k[j] > s)
                s = k[j], t = j;
        }
        d[t]++;
    }
    int s = -1, t = 0;
    for (int i = 1; i <= n; i++)
        if (d[i] > s)
            s = d[i], t = i;
    cout << t;
    return 0;
}

// #include <iostream>
// #include <cmath>
// #include <algorithm>

// using namespace std;

// int won[105];

// int main()
// {
//     int n, m, a[101][101], celec = 0, votes = 0;
//     cin >> n >> m;
//     for (int j = 1; j <= m; j++)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[j][i];
//             if (votes < a[j][i])
//                 votes = a[j][i], celec = i;
//         }
//         // cout << celec << " in " << j << endl;
//         won[celec]++;
//         votes = 0;
//     }
//     int x = 0, y = 1;
//     cout << "y is " << y << endl;
//     for (int i = 0; i <= n; i++)
//     {
//         if (won[i] > x)
//         {
//             cout << "won[i] = " << won[i] << "for i = " << i;
//             x = won[i], y = i;
//         }
//     }

//     cout << y;

//     return 0;
// }