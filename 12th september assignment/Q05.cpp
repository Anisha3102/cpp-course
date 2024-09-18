// 5.user se ek input lena hai agr wo input positive hota hai to fir ek function call karna 
// hai usme 2 values lena hai aur unka swap karna hai, agar input -ve hota hai to fir ek 
// function call karna hai aur check karna hai ki wo entered number pallindrome hai ya nahi,
// agar wo 0 hota hai to fir ek function call karna hai aur usme ek input lena hai and check
// karna hai ki wo input powerof2 hai ya nahi.

#include<bits/stdc++.h>
using namespace std;

void swap(){
  int a,b;
  cout<<"enter two numbers to be swapped\n";
  cin>>a>>b;
  a+=b;
  b=a-b;
  a-=b;
  
  cout<<"The swapped numbers are:\n "<<a<<" "<<b<<endl;
}


void palindrome(int num){
  
    int rem,sum=0;
    int temp=num;
    while(num){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    if(sum==temp){
        cout<<"yes it is a palindrome\n";
    }
    else{
        cout<<"Not palindrome\n";
    }
}


void poweroftwo(){
   int n;
   cin>>n;
   if(n==0){
       cout<<"not a power of two\n";
   }
   if(ceil(log2(n))==floor(log2(n))){
       cout<<"power of two\n";
   }
   else{
   cout<<"not a power of two\n";
   }

}


int main(){
    int a;
    cout<<"Enter a number ";
    cin>>a;
    
    
    if(a>0){
        cout<<"swap function is called\n";
        swap();
    }
    
    else if(a<0){
        a=abs(a);
        cout<<"palindrome function is called\n";
        palindrome(a);
    }
    
    else{
        cout<<"power of two function is called\n";
        poweroftwo();
    }
    
    return 0;
}

