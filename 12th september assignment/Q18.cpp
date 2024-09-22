// 18
// User se 3 input lena hai, inka average nikalna hai. Agar average > 40 hai to ek function call 
// karna hai, jisme 2 input lena hai aur unka product return karna hai. Agar product negative hai
// to absolute value return karna hai.


#include<bits/stdc++.h>
using namespace std;

int product(){
     int a,b;
     cout<<"Enter two numbers\n";
     cin>>a>>b;
     
    return a*b;
}

int absolute(int a){
    a=abs(a);
    return a;
}

int main(){
   int a,b,c;
    cout << "Enter three numbers : \n";
    cin >> a >> b >>c  ;

   int avg=(a+b+c)/3;
   
   if(avg>40){
       cout<<"product function is called\n";
       int p=product();
       cout<<p<<endl;
       
       if(p<0){
           cout<<"absolute function is called\n";
           cout<<absolute(p);
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

