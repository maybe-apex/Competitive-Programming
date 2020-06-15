#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;
    string s, r;
    int right = 0, left = 0;
    getline(cin, r);
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        s[i] == 'R' ? right++ : left++;
    }

    cout << right + left + 1;

    return 0;
}