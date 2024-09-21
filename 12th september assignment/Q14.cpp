// 14
// User se 4 input lena hai, inka product nikalna hai. Agar product > 1000 hai to ek function call
// karna hai, jisme product aur ek user input ko divide karna hai aur result return karna hai. Agar
// result fraction hai to uska ceiling value return karna hai.


#include<bits/stdc++.h>
using namespace std;

float divide(int num){
    int a;
    cout<<"enter a divisor\n";
    cin>>a;
    
    int quot=num/a;
    
    return quot;
}

int main(){
    int a,b,c,d;
    cout<<"Enter 4 numbers\n";
    cin>>a>>b>>c>>d;
   
    int prod=a*b*c*d;
    
    if(prod>1000){
        cout<<"division funtion is called\n";
        int d=divide(prod);
        cout<<d;
        if(ceil(d)!=floor(d)){
            cout<<ceil(d);
        }
    }
    
    
    else {
        cout<<"END\n";
    }
    
}
