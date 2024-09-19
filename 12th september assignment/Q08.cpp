// 8.
// User se 6 input lena hai, inka maximum nikalna hai. Agar maximum > 75 hota hai to ek function
// call karna hai, jisme maximum aur 2 user inputs ko subtract karna hai aur result return karna
// hai. Agar result negative hai to absolute value nikal kar factorial return karna hai.

#include <bits/stdc++.h>
using namespace std;

int factorial(int a){
    cout<<"factorial of "<<a<<" is :";
    int fact=1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    return fact;
}

int subtract(int maxx){
    int a,b;
    cout<<"Enter two numbers  ";
    cin>>a>>b;
    int sum=a+b;
    int subt=maxx-sum;
    
    return subt;
}


int main()
{
    int a,b,c,d,e,f;
    cout << "Enter six numbers : ";
    cin >> a >> b >>c >>d >>e >>f;

    int maxx=a;
    
    if (maxx < b)
        maxx = b;
    if (maxx < c)
        maxx = c;
    if (maxx < d)
        maxx = d;
    if (maxx < e)
        maxx = e;
    if (maxx < f)
        maxx = f;

    cout<< maxx<<endl;
    
    if(maxx>75){
        cout<<"subtract function is called\n";
      int sub=subtract(maxx);
      cout<<sub<<endl;
      if(sub<0){
          sub=abs(sub);
          cout<<"factorial function is called\n";
          cout<<factorial(sub);
      }
      else{
          cout<<"End";
      }
    }
          else{
          cout<<"End";
      }
    

    return 0;
}

