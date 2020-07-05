#include <iostream>
using namespace std;

bool compare(string &s1, string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    int n, k, i = 0;
    cin >> n >> k;
    string s[n], t, a;
    // getline(cin, t);
    for (int i = 0; i < n; i++)
        cin >> s[i++];
    // getline(cin, s[i++]);
    cin >> a;
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
    // sort(s, s + n, compare);
    // int x = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] == a)
    //         break;
    //     else
    //         x++;
    // }
    // cout << x;

    return 0;
}