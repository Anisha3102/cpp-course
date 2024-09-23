// 20
// User se 4 input lena hai, inka sum nikalna hai. Agar sum > 150 hai to ek function call karna hai,
// jisme 3 input lena hai aur unka sum return karna hai. Agar returned sum even hai to factorial
// nikalna hai aur result return karna hai.

#include<bits/stdc++.h>
using namespace std;

int add(){
 int a,b,c;
    cout << "Enter 3 numbers : \n";
    cin >> a >> b >>c  ;

   int sum=a+b+c;
   
   return sum;
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
   int a,b,c,d;
    cout << "Enter 4 numbers : \n";
    cin >> a >> b >>c >>d ;

   int sum=a+b+c+d;
   
   if(sum>150){
       cout<<"sum function is called\n";
       int a=add();
       cout<<a;
       
       if(a%2==0){
           cout<<"factorial function is called\n";
           cout<<factorial(a);
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


