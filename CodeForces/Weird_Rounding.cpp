#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string a;
    int b;
    cin >> a >> b;
    int zero = 0, cnt = 0;
    for (int i = a.size() - 1; zero != b; i--)
    {
        if (a[i] == '0')
            zero++;
        else
            cnt++;
        if (cnt == a.size())
            return cout << a.size() - 1, 0;
    }
    cout << cnt;
    return 0;
}