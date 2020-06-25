#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[10001], count = 0;
        cin >> n;
        for (int i = 0; i < 2 * n; i++)
        { 
            cin >> a[i];
        }
        // for (int i = 0; i < n; i++)
        //     cout << a[i] << " ";
        // cout << endl;
        for (int i = 0; count < n - 1; i++)
        {
            if (a[i] == 0)
                continue;
            else
            {
                cout << i + 1 << " ";
                for (int j = i + 1; 1; j++)
                {
                    // cout << "Checking " << a[i] << " with " << a[j] << endl;
                    if ((a[i] & 1) == (a[j] & 1) && a[j] != 0)
                    {
                        a[j] = 0;
                        cout << j + 1 << endl;
                        break;
                    }
                }
                count++;
            }
        }
    }
    return 0;
}