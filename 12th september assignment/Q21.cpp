// 21
// User se 2 input lena hai, inka product nikalna hai. Agar product < 20 hai to ek function call 
// karna hai aur product ko 5 se add karna hai aur result return karna hai.

#include<bits/stdc++.h>
using namespace std;

int add(int a){
    return a+5;
}

int main(){
   int a,b;
    cout << "Enter 2 numbers : \n";
    cin >> a >> b ;

  int prod=a*b;
  
  if(prod<20){
      cout<<"add function is called";
      cout<<add(prod);
  }
   
   else{
       cout<<"END";
   }
      return 0;
}

