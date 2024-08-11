// Write a C++ function that takes three angles as input and uses nested 
// if-else statements to determine if they can form a right-angled triangle, an obtuse triangle, or an acute triangle.

#include<bits/stdc++.h>
using namespace std;

string triangle(float a,float b,float c){
    if(a+b+c==180){
        if(a==90 || b==90 || c==90){
            return "right-angled triangle";
        }
        else if(a>90 || b>90 || c>90){
            return "an obtuse triangle";
        }
        else{
            return "an acute triangle";
        }
    }
    else {
        return "invalid input";
    }
}

int main(){
    float a,b,c;
    cout<< "enter the three angles of the triangle" ;
    cin >>a>>b>>c;

    cout<<triangle(a,b,c);

    return 0;
    }