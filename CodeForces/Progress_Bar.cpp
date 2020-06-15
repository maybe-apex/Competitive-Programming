#include <iostream>

using namespace std;

int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    int num = p * (n * m) / 100;
    for (int i = 0; i < n; i++)
    {
        if (num > m)
        {
            cout << m << " ";
            num -= m;
        }
        else
        {
            cout << num << " ";
            num = 0;
        }
    }
    return 0;
}