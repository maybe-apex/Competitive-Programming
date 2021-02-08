// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n, m, j = 1;
//     cin >> n >> m;
//     vector<int> pos(n);
//     map<int, int> high;
//     map<int, int> low;
//     for (auto &i : pos)
//         i = j++;
//     for (int i = 0; i < n; i++)
//         high[i + 1] = i, low[i + 1] = i;
//     while (m--)
//     {
//         int x;
//         cin >> x;
//         auto y = find(pos.begin(), pos.end(), x);
//         int index = distance(pos.begin(), y);
//         if (index)
//         {
//             int z = *(y - 1);
//             iter_swap(y, y - 1);
//             if (high[x] > index - 1)
//                 high[x] = index - 1;
//             if (low[z] < index)
//                 low[z] = index;
//         }
//     }
//     for (int i = 1; i <= n; i++)
//         cout << high[i] + 1 << " " << low[i] + 1 << endl;
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> a;
    map<int, int> b;
    
    return 0;
}