#include <iostream>

using namespace std;

int main()
{
    bool game = true;
    while (game)
    {
        int n = 0;

        while (n < 10)
        {
            cout << "Pick number of sticks : ";
            cin >> n;
            if (n < 10)
                cout << "Please pick atleast 10 sticks ! " << endl;
        }

        n % 5 ? cout << "Computer won the toss\n" : cout << "You won the toss\n";

        while (n != 1)
        {
            if (n % 5)
            {
                if ((n - (n % 5)) != 0)
                {
                    cout << "Computer picked " << n % 5 << " sticks\n";
                    n -= n % 5;
                    cout << n << " sticks remaining\n";
                }
                else
                {
                    cout << "Computer picked " << (n % 5) - 1 << " sticks\n";
                    n -= (n % 5) - 1;
                    cout << n << " sticks remaining\n";
                }
            }
            if (!(n % 5))
            {
                int t = 99;
                while (t > 5)
                {
                    if (t != 99)
                        cout << "Invalid pick !\n";
                    cout << "Enter the number of sticks you would like to pick : ";
                    cin >> t;
                    if (t != 99 && t < 5)
                        n -= t;
                    cout << n << " sticks remaining\n";
                }
            }
        }
        if (n == 1)
            cout << "Computer Won !\n";
        char r;
        while (1)
        {
            cout << "Press Y to play again or N to stop : ";
            scanf(" %c", &r);
            if (r == 'Y')
            {
                game = true;
                break;
            }
            else if (r == 'N')
            {
                game = false;
                cout << "Thanks for playing\n";
                break;
            }
            else if (r != 'Y' && r != 'N')
                cout << "Enter valid input\n";
        }
    }

    return 0;
}