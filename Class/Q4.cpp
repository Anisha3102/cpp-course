#include <bits/stdc++.h>
using namespace std;


class ABC{
public:
int l;
int b;

int sum(){
    return c+d;
}
int multi(){
   return c*d; 
}


private:
int c=10;
int d=20;

};

int main()
{
    ABC obj;
    
    cout<<obj.sum()<<endl<<obj.multi();
    
    return 0;
}

