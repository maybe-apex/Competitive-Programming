#include <iostream>

using namespace std;

int main()
{

    int n, one = 0, zero = 0;
    cin >> n;
    string r, s;
    getline(cin, r);
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        s[i] == 'n' ? one++ : '0';
    }
    zero = (s.size() - one * 3) / 4;

    for (int i = 0; i < one; i++)
        cout << 1 << " ";
    for (int i = 0; i < zero; i++)
        cout << 0 << " ";

    return 0;
}