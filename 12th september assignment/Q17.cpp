// 17
// User se 4 input lena hai, inka sum nikalna hai. Agar sum < 50 hai to ek function call karna
// hai aur sum ka reverse nikalna hai aur result return karna hai. Agar reverse value even hai 
// to uska half return karna hai.


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

float half(int a){
    return a/2;
}

int main(){
   int a,b,c,d;
    cout << "Enter four numbers : \n";
    cin >> a >> b >>c >>d ;

   int sum=a+b+c+d;
   
   if(sum<50){
       cout<<"reverse function is called\n";
       int r=reverse(sum);
       cout<<r<<endl;
       
       if(r%2==0){
           cout<<"half function is called";
           cout<<half(r);
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



