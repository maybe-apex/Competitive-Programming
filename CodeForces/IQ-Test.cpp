#include <iostream>

using namespace std;

int main()
{
    bool found = false;
    int a[5][5];
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            char x;
            cin >> x;
            a[i][j] = x == '#' ? 69 : 72;
        }
        if (found)
            break;
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            int nbr = 0;
            if (a[i + 1][j] == a[i][j])
                nbr++;
            if (a[i + 1][j + 1] == a[i][j])
                nbr++;
            if (a[i][j + 1] == a[i][j])
                nbr++;
            if (nbr != 1)
            {
                found = true;
                break;
            }
        }
        if (found)
            break;
    }
    cout << (found ? "YES" : "NO");

    return 0;
}