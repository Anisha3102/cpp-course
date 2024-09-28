 //Q09
    // 1 1 1 1
    // 2 2 1 2
    // 3 1 2 3
    // 1 2 3 4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        int n = 1;
        for (int j = 1; j <= 4; j++)
        {
            if (j <= 4 - i)
            {
                cout << i;
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
