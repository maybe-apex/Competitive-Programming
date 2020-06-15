#include <iostream>

using namespace std;

int main()
{

    int n, x = 0, y = 0, z = 0, a, teams, b[4][7000], j = 1;
    cin >> n;

    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            x++; 
            b[1][0] = x;
            b[1][x] = j;
            j++;
        }
        if (a == 2)
        {
            y++;
            b[2][0] = y;
            b[2][y] = j;
            j++;
        }
        if (a == 3)
        {
            z++;
            b[3][0] = z;
            b[3][z] = j;
            j++;
        }
    }
    teams = min(min(x, y), z);

    cout << teams << endl;
    for (int i = 0; i < teams; i++)
    {
        cout << b[1][i + 1] << " " << b[2][i + 1] << " " << b[3][i + 1] << endl;
    }
    return 0;
}