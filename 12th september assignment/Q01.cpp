// 1. user se 3 input lena agr unka avg 50 se zada aya then ek function call karna hai us function mai 20-30 print karna hai 
// ab agar uska avg 50 se kam ata hai to fir function calling 1-20 print karna hai


#include<bits/stdc++.h>
using namespace std;

void print(){
    for(int i=20;i<=30;i++){
        cout<<i<<endl;
    }
}

void print1(){
    for(int i=1;i<=20;i++){
        cout<<i<<endl;
    }
}

int main(){
    int a,b,c;
    cout<<"Enter three numbers ";
    cin>>a>>b>>c;
    
    int avg=(a+b+c)/3;
    
    if(avg>50){
        print();
    }
    
    else if(avg<50){
        print1();
    }
    
    else{
        cout<<"invalid input";
    }
    
    return 0;
}

