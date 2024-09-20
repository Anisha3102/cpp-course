// 12
// User se 3 input lena hai, unka sum nikalna hai. Agar sum > 80 hai to ek function call karna hai,
// jisme 2 input lena hai aur unka division result return karna hai. Agar result integer hai to us 
// integer ka reverse return karna hai.


#include<bits/stdc++.h>
using namespace std;

int reverse(int num){
     int rem,sum=0;
    while(num){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    return sum;
}

float division(){
    int a,b;
    cout<<"enter 2 numbers\n";
    cin>>a>>b;
    int divv=a/b;
    return divv;
}


int main(){
    int a,b,c;
    cout<<"Enter 3 numbers\n";
    cin>>a>>b>>c;
   
    int sum=a+b+c;
    
    if(sum>80){
        cout<<"Division function is called\n";
        int d=division();
        cout<<d<<endl;
        if(ceil(d)==floor(d)){
            cout<<"reverse function is called\n";
            cout<<reverse(d);
        }
        else{
            cout<<"END\n";
        }
    
    }    
    
    else {
        cout<<"END\n";
    }
}
    
