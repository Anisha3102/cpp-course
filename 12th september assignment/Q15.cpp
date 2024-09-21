// 15
// User se 3 input lena hai, inka average nikalna hai. Agar average < 25 hai to ek function call
// karna hai aur check karna hai ki wo prime number hai ya nahi. Agar prime hai to uska factorial
// return karna hai.

#include<bits/stdc++.h>
using namespace std;

void prime(int num){
    
    if (num < 3)
    {
        cout << "not prime\n";
    }
    for (int i = 3; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "not prime\n";
        }
    }
    cout << "prime\n";
    
    cout<<"factorial function is called\n";
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout<< fact;

   
}

int main(){
    int a,b,c;
    cout<<"Enter 3 numbers\n";
    cin>>a>>b>>c;
   
    int avg=(a+b+c)/3;
    
    if(avg<25){
        cout<<"prime funtion is called\n";
        prime(avg);
    }
        
    else {
        cout<<"END\n";
    }
    return 0;
}
