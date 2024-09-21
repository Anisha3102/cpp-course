// 16
// User se 5 input lena hai, inka maximum nikalna hai. Agar maximum > 90 hota hai to ek function
// call karna hai, jisme maximum aur ek user input ko subtract karna hai aur result return karna 
// hai. Agar result positive hai to us value ka cube return karna hai.

#include<bits/stdc++.h>
using namespace std;

int subtract(int a){
    int b;
    cout<<"Enter an integer\n";
    cin>>b;
    
    int minus=a-b;
    
    return minus;
}

int cube(int a){
    return a*a*a;
}

int main(){
   int a,b,c,d,e;
    cout << "Enter five numbers : \n";
    cin >> a >> b >>c >>d >>e;

    int maxx=a;
    
    if (maxx < b)
        maxx = b;
    if (maxx < c)
        maxx = c;
    if (maxx < d)
        maxx = d;
    if (maxx < e)
        maxx = e;
   

    cout<< maxx<<endl;
    
    if(maxx>90){
        cout<<"subtract function is called\n";
      int sub=subtract(maxx);
      cout<<sub<<endl;
      
      if(sub>0){
          cout<<"cube function is called\n";
          cout<<cube(sub);
      }
      else{
          cout<<"END\n";
      }
    }
          else{
          cout<<"END\n";
      }
      return 0;
}

