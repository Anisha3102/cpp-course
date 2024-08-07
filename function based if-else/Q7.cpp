// Q7
// Create a C++ function that takes a character as an argument and returns whether it is a vowel or consonant using if-else statements.

#include <bits/stdc++.h>
using namespace std;

string vowelconstant(char k){
    if(k=='a' ||k=='e'|| k=='i' ||k=='o'|| k=='u' ){
        return "vowel";
    }
    else if(!isalpha( k)) {
        return "Invalid input. Please enter an alphabet character." ;
    }
    else{
        return "consonant";
    }
}
int main()
{
    char k;
    cout << "Enter a character : ";
    cin >> k;

    cout << vowelconstant(k);

    return 0;
}

