#include <iostream>

using namespace std;

bool lucky(int a)
{
    for (int i = 10; a > 0; i *= 10)
    {
        // cout << "Checking " << a << endl;
        if (a % i != 4 && a % i != 7)
        {
            // cout << a << " not lucky\n";
            return false;
        }
        a /= i;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int x = 1, count = 0;
    do
    {
        // cout << "Testing for " << x << endl;
        if (lucky(x))
            cout << "Found " << x << endl, count++;
        x++;
    } while (x != n + 1);

    cout << count;

    return 0;
}