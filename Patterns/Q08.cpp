 //Q08
    // A
    // 1 2 
    // B C D 
    // 1 2 3 4

   

#include<bits/stdc++.h>
using namespace std;

int main(){
    
   for(int i=1;i<=4;i++){
       int num=1;
       char k='A';
       for(int j=1;j<=i;j++){
           if(i%2==0){
               cout<<num;
               num++;
           }
           else{
               cout<<k;
               k++;
           }
           
       }
       cout<<endl;
   }

    return 0;
}

