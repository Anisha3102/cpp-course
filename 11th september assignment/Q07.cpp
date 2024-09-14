// 7. user se ek input lena hai agar wo input ek vowel hota hai to ek function run karna A() ==>A is printed
//     wo input consonant hota hai to function B() ===> B is printed
//     wo input 0 1 2 3 4 5 function C() ===> c is printed
//     wo #$%^&&**(( )) function D() ===> D is printed


#include <bits/stdc++.h>
using namespace std;

void A()
{
    cout << "A is printed" << endl;
}

void B()
{
    cout << "B is printed" << endl;
}

void C()
{
    cout << "C is printed" << endl;
}

void D()
{
    cout << "D is printed" << endl;
}

void call(char k)
{
    if (isalpha(k))
    {
        if (k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u' || k == 'A' || k == 'E' || k == 'I' || k == 'O' || k == 'U')
        {
            A();
        }
        else
        {
            B();
        }
    }
    else if (isdigit(k))
    {
        C();
    }
    else
    {
        D();
    }
}

int main()
{
    char k;

    cout << "Enter a cahracter : ";
    cin >> k;

    call(k);

    return 0;
}


