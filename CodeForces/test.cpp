#include <iostream>
using namespace std;
int main()
{

    int a[5], x = 0;
    cin >> a[1] >> a[2] >> a[3] >> a[4];
    char s[10000];
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
        x += a[s[i] - '0'];
    cout << x;

    return 0;
}