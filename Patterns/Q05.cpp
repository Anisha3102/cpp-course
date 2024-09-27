  //Q05
    //  1 2 3 4 
    //  1 2 3
    //  1 2
    //  1

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    for(int i=1;i<=4;i++){
        int n=1;
        for(int j=4;j>=i;j--){
            cout<<n<<" ";
             n++;
        }
        cout<<endl;
       
    }

    return 0;
}
