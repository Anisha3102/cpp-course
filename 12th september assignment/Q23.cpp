// 23
// User se 3 input lena hai, inka sum nikalna hai. Agar sum < 30 hai to ek function call karna hai
// aur sum ko 10 se multiply karna hai aur result return karna hai.

#include<bits/stdc++.h>
using namespace std;

int multi(int a){
    return a*10;
}

int main(){
   int a,b,c;
    cout << "Enter 3 numbers : \n";
    cin >> a >> b >>c ;


     int sum=a+b+c;
     
     if(sum<30){
         cout<<"multiply function is called\n";
         cout<<multi(sum);
     }
   
   else{
       cout<<"END";
   }
      return 0;
}
