// private modifier in class


#include <bits/stdc++.h>
using namespace std;


class ABC{
public:
int l;
int b;
int print(){
    return c+d;
}

private:
int c=10;
int d=20;

};

int main()
{
    ABC obj;
    
    cout<<obj.print();
    
    return 0;
}
