// 24
// User se 5 input lena hai, inka product nikalna hai. Agar product > 500 hai to ek function call
// karna hai, jisme product aur ek user input ko divide karna hai aur result return karna hai. Agar
// result integer hai to factorial nikalna hai aur result return karna hai.

#include<bits/stdc++.h>
using namespace std;

float divide(int a){
    int b;
    cout<<"enter a divisor\n";
    cin>>b;
    
    return a/b;
}

int factorial(int num){
     int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;

}


int main(){
   int a,b,c,d,e;
    cout << "Enter 5 numbers : \n";
    cin >> a >> b >>c >>d >>e ;


     int prod=a*b*c*d*e;
     
     if(prod>500){
         cout<<"divide function is called\n";
         int d=divide(prod);
         cout<<d;
         
         if(ceil(d)==floor(d)){
             cout<<"factorial function is called\n";
             cout<<factorial(d);
         }
         else{
             cout<<"END";
         }
     }
   
   else{
       cout<<"END";
   }
      return 0;
}
