//copy constructor 

#include<bits/stdc++.h>
using namespace std;

class Abc{
    
   public:
   int x;
   Abc(int a){
       x=a;
   }
   Abc(A &i){
       x=i.x;
   }
    
};

int main(){
    Abc a1(20);
    A a2(a1);
    cout<<a2.x;
    
    return 0;
}
