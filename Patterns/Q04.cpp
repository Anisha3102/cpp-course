
    //Q04
    // A B C D
    // A B C
    // A B
    // A

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    for(int i=1;i<=4;i++){
        char n='A';
        for(int j=4;j>=i;j--){
            cout<<n<<" ";
             n++;
        }
        cout<<endl;
       
    }

    return 0;
}
