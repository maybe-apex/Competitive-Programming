#include <iostream>

using namespace std;

int main()
{

    int k, r, i = 1;
    cin >> k >> r;
    int l = k;
    while (1)
    {
        if (l % 10 == r || l % 10 == 0)
            break;
        l += k;
        i++;
        // cout << l << endl;
    }
    cout << i;
    return 0;
}