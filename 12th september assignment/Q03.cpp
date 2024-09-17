// Q3. 4 input lena hai unka sum karna hai(input -ve bhi ho sakte hai ) agar unka sum -ve hi 
// ata hai to fir reverse of 2nd number karna hai
//  agr wo 2nd number -ve hota hai to use positive mai karke uska reverse nikalna hai 
//  (hint: abs(b)) agr sum +ve hota
//  hai to fir 4 ka factorial nikalna hai agar sum 0 hota 
//  hai to fir 4 input ka product nikalna hai.

#include<bits/stdc++.h>
using namespace std;


int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}
int reverse(int num){
    int r=0;
    int sum=0;
    while(num>0){
        r=num%10;
        sum=sum*10+r;
        num/=10;
    }
    return sum;
}

int sum(int a,int b,int c,int d){
    return a+b+c+d;
}

int main(){
    int a,b,c,d;
    cout<<"Enter 4 numbers \n";
    cin>>a>>b>>c>>d;
    int s= sum(a,b,c,d);
    if(s<0){
        b=abs(b);
        cout<<"The reverse of num" <<b<<"is: "<<reverse(b);
    }
    
    else if(s>0){
        cout<<"factorial of num"<<d<<"is :"<<factorial(d);
    }
    
    else{
       int product=a*b*c*d; 
       cout<<product;
    }
}

