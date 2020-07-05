#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    string a[5] = {"Danil",
                   "Slava",
                   "Olya",
                   "Ann",
                   "Nikita"};
    int N = S.size();
    int num = 0;
    for (string s : a)
    {
        for (int i = 0; i < N; i++)
            if (S.substr(i, s.size()) == s)
                num++;
    }
    cout << (num == 1 ? "YES" : "NO") << endl;
    return 0;
}
