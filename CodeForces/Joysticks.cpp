#include <iostream>

using namespace std;

int main()
{
    int a, b, c = 0;
    cin >> a >> b;
    while (a > 0 && b > 0)
    {
        if (a > b)
            swap(a, b);
        b -= 2, a += 1, c++;
    }
    cout << (b == -1 ? c - 1 : c);

    return 0;
}