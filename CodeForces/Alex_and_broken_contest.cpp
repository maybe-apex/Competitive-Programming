#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    string s;
    string a[5] = {"Danil", "Olya", "Ann", "Slava", "Nikita"};
    getline(cin, s);
    for (auto n : a)
        for (int i = 0; i < s.size(); i++)
            if (s.substr(i, n.size()) == n)
                x++;
    cout << (x == 1 ? "YES" : "NO");
}