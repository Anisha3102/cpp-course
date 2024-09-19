// 9.
// User se 3 input lena hai, inka sum nikalna hai. Agar sum 0 hota hai to ek function call karna hai
// aur check karna hai ki wo perfect square hai ya nahi. Agar perfect square hai to uska square root
// nikalna hai aur result return karna hai.


#include<bits/stdc++.h>
using namespace std;

double perfectsquare(){
    int num;
    cout<<"Enter a number\n";
    cin>>num;
    
     if (ceil((double)sqrt(num)) == floor((double)sqrt(num))){
        cout<<"perfect square\n";
        cout<<"square root of "<<num<<" is : ";
        double root=sqrt(num);
        return root;
    }    
    
}

int main(){
    int a,b,c;
    cout<<"Enter three numbers\n";
    cin>>a>>b>>c;
    
    int sum=a+b+c;
    
    if(sum==0){
        cout<<"Perfect square function is called\n";
        cout<<perfectsquare();
       
    }
    else{
        cout<<"END";
    }
    return 0;
}


