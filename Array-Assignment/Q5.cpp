// Implement and use a function to multiply two
// matrices.


#include <bits/stdc++.h>
using namespace std;

void multiply(int m1[5][5],int m2[5][5],int r,int c){
    int res[5][5]={0},i,j,k;
      for (i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            for (int k = 0; k < c; k++) {
                res[i][j] = res[i][j] + m1[i][k] * m2[k][j];
            }
        }
    }
         

for(i=0;i<r;i++){
      for(j=0;j<c;j++){
          cout<<res[i][j]<<" ";
          
      }
      
      cout<<endl;
  }
  
}

int main()
{
  int m1[5][5],m2[5][5],res[5][5];
  int r,c,i,j;
  
  cout<<"Enter size of first matrix";
  cin>>r>>c;
  
  for(i=0;i<r;i++){
      for(j=0;j<c;j++)
          cin>>m1[i][j];
      
  }
  
  for(i=0;i<r;i++){
      for(j=0;j<c;j++)
          cout<<m1[i][j]<<" ";
      
      cout<<endl;
  }
  
  cout<<"Enter size of second matrix";
  cin>>r>>c;
  
  for(i=0;i<r;i++){
      for(j=0;j<c;j++)
          cin>>m2[i][j];
      
  }
  
   for(i=0;i<r;i++){
      for(j=0;j<c;j++)
          cout<<m2[i][j]<<" ";
      
      cout<<endl;
  }
   multiply(m1,m2,r,c);

    return 0;
}