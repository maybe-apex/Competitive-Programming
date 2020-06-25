#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[4] = {0, 0, 0, 0};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 25)
            a[1]++;
        if (x == 50)
        {
            a[2]++;
            a[1]--;
        }
        if (x == 100)
        {
            a[3]++;
            if (a[2] >= 1)
            {
                a[2]--;
                a[1]--;
            }
            else
                a[1] -= 3;
        }
        if (a[1] < 0)
            return cout << "NO", 0;
    }

    return cout << "YES", 0;
}