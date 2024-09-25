
//Q02
//   A
//   B C
//   D E F

#include<bits/stdc++.h>
using namespace std;

int main(){
    char n='A';
    for(int i=1;i<=3;i++){
        for(int j=1;j<=i;j++){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }

    return 0;
}




