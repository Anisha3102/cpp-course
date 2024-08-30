// 1. Find the Maximum Value in an Array
// o Explanation: Identify the largest value in the array.
// o Given Array: {3, 1, 4, 1, 5, 9, 2}
// o Expected Result: 9


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={3,1,4,1,5,9,2};
    int max=arr[0];
    
    for(int i=1;i<7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
     cout<<max;
     
    return 0;
}