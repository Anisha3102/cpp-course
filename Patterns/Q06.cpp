 //Q06
    // 0 0 0 1
    // 0 0 1 2
    // 0 1 2 3
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



