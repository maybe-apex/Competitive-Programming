#include <iostream>

using namespace std;

int main()
{
    int n, count = 9;
    cin >> n;
    while (n >= 10)
    {
        n++;
        count++;
        while (n % 10 == 0)
        {
            n /= 10;
        }
    }
    cout << count;

    return 0;
}