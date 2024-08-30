// 6. Find the Index of the First Occurrence of a Value
// o Explanation: Return the index of the first appearance of a specified value.
// o Given Array: {10, 20, 30, 40, 50}
// o Search Value: 30
// o Expected Result: 2


#include <bits/stdc++.h>
using namespace std;


int main()
{
   int arr[]={10,20,30,40,50};
   int key=30;
   
   for(int i=0;i<5;i++){
       if(arr[i]==key){
           cout<<i;       
       }
   }
    
    return 0;
}

