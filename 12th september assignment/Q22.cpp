
// 22
// User se 6 input lena hai, inka average nikalna hai. Agar average > 70 hai to ek function call
// karna hai, jisme 4 input lena hai aur unka maximum return karna hai. Agar maximum > 50 hai to
// uska cube return karna hai.


#include<bits/stdc++.h>
using namespace std;

int maxx(){
   int a,b,c,d;
    cout << "Enter four numbers : \n";
    cin >> a >> b >>c >>d ;

    int maxx=a;
    
    if (maxx < b)
        maxx = b;
    if (maxx < c)
        maxx = c;
    if (maxx < d)
        maxx = d;
  
   return maxx;
}

int cube(int a){
    return a*a*a;
}

int main(){
   int a,b,c,d,e,f;
    cout << "Enter 6 numbers : \n";
    cin >> a >> b >>c >>d >>e >>f;

    int avg=(a+b+c+d+e+f)/6;
    
  if(avg>70){
      cout<<"max function is called";
      int m=maxx();
       cout<<m;
       if(m>50){
           cout<<"cube function is called";
           cout<<cube(m);
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

