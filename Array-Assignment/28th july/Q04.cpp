// 4. Find the Sum of All Even Numbers in an Array
// o Explanation: Sum all even numbers present in the array.
// o Given Array: {1, 2, 3, 4, 5, 6}
// o Expected Result: 12 (Sum of 2, 4, and 6)

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    
     for(int i=0;i<n;i++){
         if(arr[i]%2==0){
             sum=sum+arr[i];
         }
     }
     cout<<sum;
    
    return 0;
}
