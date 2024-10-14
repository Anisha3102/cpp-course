//6. cal sum of all even values of an array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 4, 6, 2, 5, 3};
    int n = arr.size();
    int sum=0;


    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0){
        sum=sum+arr[i];
        }
    }

    cout<<sum;
}



