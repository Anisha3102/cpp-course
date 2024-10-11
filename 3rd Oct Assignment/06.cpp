//Q6
//  Overload a function swapValues to swap two integers, two floats, and two characters. 
//  Write a program that demonstrates swapping of these data types.

#include <bits/stdc++.h>
using namespace std;

void swap(int a,int b){
    int c=a;
    a=b;
    b=c;
    cout<<"after swapping"<<" a : "<<a<<"    b : "<<b<<endl;
}

void swap(float a,float b){
    float c=a;
    a=b;
    b=c;
    cout<<"after swapping"<<" a : "<<a<<"     b : "<<b<<endl;
}

void swap(char a, char b){
   char c='a';
    a='b';
    b='a';
     cout<<"after swapping"<<" a : "<<a<<"     b : "<<b<<endl;
}

int main()
{
    
    int a,b;
    cout<<"enter two integer\n";
    cin>>a>>b;
    float c,d;
    cout<<"enter two decimal number\n";
    cin>>c>>d;
    cout<<"enter two characters\n";
    char e,f;
    cin>>e>>f;
    
    swap(a,b);
    swap(c,d);
    swap(e,f);

    return 0;
}



