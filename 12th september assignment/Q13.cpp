// 13
// User se 2 input lena hai, inka difference nikalna hai. Agar difference < 0 hai to absolute value
// return karna hai. Agar difference even hai to ek function call karna hai aur us value ka cube 
// return karna hai.


#include<bits/stdc++.h>
using namespace std;

int abso(int a){
   a=abs(a); 
   return a;
}

int cube(int a){
    return a*a*a;
}




int main(){
    int a,b;
    cout<<"Enter 2 numbers\n";
    cin>>a>>b;
   
    int diff=a-b;
    
    if(diff<0){
        cout<<"absolute funtion is called\n";
        cout<<abso(diff);
    }
    
    else if(diff%2==0){
        cout<<cube(diff);
    }
    
    else {
        cout<<"END\n";
    }
    
}

