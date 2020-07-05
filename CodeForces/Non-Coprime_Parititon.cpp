#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 3)
        cout << "No";
    else
    {
        cout << "Yes\n1 ";
        cout << n << endl
             << --n << " ";
        while (n >= 1)
            cout << n-- << " ";
    }

    return 0;
}