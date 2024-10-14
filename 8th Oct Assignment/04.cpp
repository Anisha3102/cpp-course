//4. print all the even values

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 4, 6, 2, 5, 3};
    int n = arr.size();


    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
           cout<<arr[i]<<" ";
        }
    }

    
}

