// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     if (n == 1 || n == 0)
//     {
//         cout << 1 << endl
//              << n;
//         return 0;
//     }
//     int a[n], k = 0;
//     for (int i = 0; i < 10 * n; i++)
//     {
//         int x = i;
//         bool check = 0;
//         for (int j = 1; x > 0; j++)
//         {
//             if (x % 10 >= 2)
//             {
//                 check = 0;
//                 break;
//             }
//             x /= 10;
//             if (x == 0)
//                 check = 1;
//         }
//         if (check)
//             a[k++] = i;
//     }
//     int ans[k + 2], t = 0;
//     while (n >= 0)
//     {
//         for (int i = 0; i < k; i++)
//         {
//             if (a[i] > n)
//             {
//                 n -= a[i - 1];
//                 if (n >= 0)
//                     ans[t++] = a[i - 1];
//                 // cout << " | " << a[i - 1] << "\t";
//                 break;
//             }
//         }
//     }
//     cout << t << endl;
//     for (int i = 0; i < t; i++)
//         cout << ans[i] << " ";

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> vec;
    while (n)
    {
        int x = n;
        int p = 1;
        int m = 0;
        while (x)
        {
            if (x % 10 != 0)
                m += p;
            x /= 10;
            p *= 10;
        }
        vec.push_back(m);
        n -= m;
    }
    cout << vec.size() << endl;
    for (auto y : vec)
    {
        cout << y << " ";
    }
    return 0;
}