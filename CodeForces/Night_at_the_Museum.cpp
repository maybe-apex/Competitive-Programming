#include <iostream>

using namespace std;

int main()
{

    int x = 0;
    string s;
    getline(cin, s);
    char ptr = 'a';
    for (int i = 0; i < s.size(); i++)
    {
        x += min(abs(ptr - s[i]), 26 - abs((ptr - s[i])));
        ptr = s[i];
    }
    cout << x;
    // cout << ptr - s[0];
    return 0;
}