#include <iostream>
#include <cstring>

using namespace std;

// amazing code //

int main()
{

    string s;
    getline(cin, s);
    int k = s.find('0');
    k == -1 ? s.erase(0, 1) : s.erase(k, 1);
    cout << s;
}

// my code //

// int main()
// {
//     bool changed = false;
//     string s;
//     getline(cin, s);

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '0')
//         {
//             changed = true;
//             s[i] = '2';
//             break;
//         }
//     }
//     if (changed)
//     {
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] != '2')
//                 cout << s[i];
//         }
//     }
//     else
//     {
//         for (int i = 0; i < s.size() - 1; i++)
//             cout << s[i];
//     }

//     return 0;
// }