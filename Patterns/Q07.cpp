//Q07
    // 0 0 0 A
    // 0 0 A B
    // 0 A B C
    // A B C D





#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        char n = 'A';
        for (int j = 1; j <= 4; j++)
        {
            if (j <= 4 - i)
            {
                cout << 0;
            }
            else
            {
                cout << n;
                n++;
            }
        }
        cout << endl;
    }

    return 0;
}

