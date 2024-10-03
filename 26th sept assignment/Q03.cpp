// 3.You have N chocolates, and you want to distribute them among M children.
// Each child must get at least 1 chocolate. Distribute the chocolates in a way 
// that the difference between the child who gets the most chocolates and the child
// who gets the fewest is minimized. Write a loop-based solution to distribute the chocolates.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter the no of chocolate : ";
    cin >> n;

    cout << "Enter the no of children : ";
    cin >> m;

    if (m > n || m < 0)
    {
        cout << "Not possible";
        return 0;
    }

    int children[m];

    for (int i = 0; i < m; i++)
    {
        children[i] = n / m;
    }

    n = n % m;

    int j = 0;
    
    while (n > 0)
    {
        children[j]++;
        j++;
        n--;
    }

    cout << "Chocolate distributed in this manner : ";
    for (int i = 0; i < m; i++)
    {
        cout << children[i] << "\t";
    }

    return 0;
}

