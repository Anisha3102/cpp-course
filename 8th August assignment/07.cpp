// Write a C++ function that takes the coordinates of a point (x, y) as input and 
// uses nested if-else statements to determine in which quadrant the point lies.

#include<bits/stdc++.h>
using namespace std;

string quadrant(float x , float y){
    if(x>0){
        if(y>0){
            return "1st quadrant";
        }
        else{
            return "4th quadrant";
        }
    }
    else{
        if(y>0){
            return "2nd quadrant";
        }
        else{
            return "3rd quadrant";
        }
    }
}

int main(){
    float a,b;
    cout<<"enter the coordinates of a point respectively";
    cin>>a>>b;
    
    cout<<quadrant(a,b);
    
    return 0;
}
