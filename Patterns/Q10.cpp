//Q10     0 0 0 1
    //      0 0 A B
    //      0 1 2 3
    //      A B C D

#include<bits/stdc++.h>
using namespace std;

int main(){
    
   for(int i=1;i<=4;i++){
       int num=1;
       char k='A';
      
      for(int j=1;j<=4;j++){
          if(j<=4-i){
              cout<<"0";
          }
          else{
              if(i%2==0){
                  cout<<k;
                  k++;
                  
              }
              
              else{
                  cout<<num;
                  num++;
              }
          }
      }
      
       cout<<endl;
   }

    return 0;
}

  

