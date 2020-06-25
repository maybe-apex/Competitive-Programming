#include <iostream>

using namespace std;

int cal(int num)
{
    int ans = 0;
    while (num)
    {
        ans += num % 10;
        num /= 10;
    }
    return ans;
}

int main()
{

    int n, c = 1;
    cin >> n;
    int ans = 0;
    while (n)
    {
        ans++;
        if (cal(ans) == 10)
            n--;
    }
    cout << ans;

    return 0;
}