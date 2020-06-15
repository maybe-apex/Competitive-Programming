#include <iostream>

using namespace std;

int main()
{

    int n, top, a[10][10];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0)
                a[i][j] = 1;
            else
                a[i][j] = a[i][j - 1] + a[i - 1][j];
            top = max(a[0][0], a[i][j]);
        }
    }

    cout << top;

    return 0;
}