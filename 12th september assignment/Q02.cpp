// 2.  3 input lena hai usme se jo max hoga agr wo b hota hai to ek 
// function call karna hai aur us function mai 5 ka factorial print karwana ,
// max agar c hota hai to fir c powerof2 ha ya nahi check karna hai,
// agr max a hota hai to fir apna nam print karna hai.

#include<bits/stdc++.h>
using namespace std;

void printa(){
   cout<<"Anisha";
}


void printb(){
    int fact=1;
   for(int i=1;i<=5;i++){
       fact*=i;
   }
   cout<<fact;
}


void printc(){
   int n;
   cin>>n;
   if(n==0){
       cout<<"not a power of two";
   }
   if(ceil(log2(n))==floor(log2(n))){
       cout<<"power of two";
   }
   else{
   cout<<"not a power of two";
   }
}


int main(){
    int a,b,c;
    cout<<"Enter three numbers ";
    cin>>a>>b>>c;
    
    int maximum=max(max(a,b),c);
    
    if(maximum==a){
        printa();
    }
    
    else if(maximum==b){
        printb();
    }
    
    else{
        printc();
    }
    
    return 0;
}

