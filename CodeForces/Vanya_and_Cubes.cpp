#include <iostream>

using namespace std;

int main()
{

    int n, t = 0;
    float x = 1;
    cin >> n;

    do
    {
        t += ((x / 2) * (1 + x));
        if (t > n)
            break;
        x++;
        // cout << "checked for" << t << endl;
    } while (t < n);
    cout << x - 1;

    return 0;
}