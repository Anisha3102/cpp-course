// 6.A shop sells books, where each book costs either 120, 50, or 20 rupees. For a given amount X,
// use loops to find how many books the person can buy with an exact match of the amount using any
// combination of these prices.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int amount;
    int book120 = 0, book50 = 0, book20 = 0;

    cout << "Enter amount : ";
    cin >> amount;

    while (amount >= 120)
    {
        book120++;
        amount -= 120;
    }

    while (amount >= 50)
    {
        book50++;
        amount -= 50;
    }

    while (amount >= 20)
    {
        book20++;
        amount -= 20;
    }

    cout << "Number of 120rs books : " << book120 << endl;
    cout << "Number of 50rs books : " << book50 << endl;
    cout << "Number of 20 books : " << book20 << endl;
    cout<<"Total number of books : "<<book120+book50+book20;
    

    return 0;
}
