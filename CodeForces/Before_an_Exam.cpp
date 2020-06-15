#include <iostream>

using namespace std;

int main()
{

    int d, st, min[1000], max[1000];
    cin >> d >> st;
    int x = d;
    int i = 0, mint = 0, maxt = 0;
    while (d--)
    {
        cin >> min[i] >> max[i];
        mint += min[i];
        maxt += max[i];
        i++;
    }
    int ex = st - mint;
    if (st >= mint && st <= maxt)
    {
        cout << "YES\n";
        for (int j = 0; j < x; j++)
        {
            cout << min[j] + std::min(max[j] - min[j], ex) << " ";
            st -= (min[j] + std::min(max[j] - min[j], ex));
            ex -= std::min(max[j] - min[j], ex);
        }
    }
    else
        cout << "NO";
    return 0;
}