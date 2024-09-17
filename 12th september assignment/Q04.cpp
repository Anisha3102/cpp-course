// 4. 5 input lena hai agar sum greater than 50 hota hai to ek function call karna hai usme 
// mai 1-50 ka sum nikalna hai, agar less than 50 hota hai to fir ek function call karna hai 
// usme 1 input char lene hai aur check karna hai ki wo vowel hai ya nahi. agar equals to 50 
// hota hai then check karna hai sum even tha ya odd.


#include<bits/stdc++.h>
using namespace std;

void printgt50(){
    int sum=0;
    cout<<"sum of 1-50 is :";
  for(int i=1;i<=50;i++){
      sum+=i;
  }
  cout<<sum;
}


void printlt50(){
   char k;
   cout<<"Enter a character to check vowel or not";
   cin>>k;
   if( k=='a' || k=='e' || k=='i' || k=='o' || k=='u' || k=='A' || k=='E' || k=='I' || k=='O' || k=='U'){
       cout<<"vowel";
   }
   else{
       cout<<"consonant";
   }
}


void printc(){
  cout<<"sum is even";
}


int main(){
    int a,b,c,d,e;
    cout<<"Enter five numbers ";
    cin>>a>>b>>c>>d>>e;
    
    int sum=a+b+c+d+e;
    
    if(sum>50){
        printgt50();
    }
    
    else if(sum<50){
        printlt50();
    }
    
    else{
        printc();
    }
    
    return 0;
}


