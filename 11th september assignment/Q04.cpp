// 4.agar user input karta hai a e i o u vowel or else constants 0 1 2 3 4 5 numbers  #$%^&*(()!>:<) special characters

#include <bits/stdc++.h>
using namespace std;

void type(char k){
if (isalpha(k))
    {
        if (k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u' || k == 'A' || k == 'E' || k == 'I' || k == 'O' || k == 'U')
        {
            cout << "Vowel";
        }
        else
        {
            cout << "Consonant";
        }
    }
    else if (isdigit(k))
    {
        cout << "Number";
    }
    else
    {
        cout << "Special Character";
    }
}

int main()
{
    char k;

    cout << "Enter a character : ";
    cin >> k;

    type(k);

    return 0;
}
