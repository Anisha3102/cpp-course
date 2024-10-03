// 1.A vending machine only accepts coins of 10, 5, and 1 rupees. Write a program that takes any 
// amount X and returns the fewest number of coins needed to make the amount.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int amount;
    int coin10 = 0, coin5 = 0, coin1 = 0;

    cout << "Enter amount : ";
    cin >> amount;

    while (amount >= 10)
    {
        coin10++;
        amount -= 10;
    }

    while (amount >= 5)
    {
        coin5++;
        amount -= 5;
    }

    while (amount >= 1)
    {
        coin1++;
        amount -= 1;
    }

    cout << "Number of 10rs coins : " << coin10 << endl;
    cout << "Number of 5rs coins : " << coin5 << endl;
    cout << "Number of 1re coin : " << coin1 << endl;
    cout<<"Total number of coins : "<<coin1+coin5+coin10;
    

    return 0;
}
