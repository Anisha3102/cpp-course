#include<bits/stdc++.h>
using namespace std;
int gridcells(int i,int j,int n,int m)
{
    if(i==n && j== m)
    {
        //cout<<path<<"\n";
        return 1;
    }
    // if(i>n)
    //     gridcells(i-1,j,n,m,path+"T");
    // if(j>m)
    //     gridcells(i,j-1,n,m,path+"L");
    // if(i>n && j>m)
    //     gridcells(i-1,j-1,n,m,path+"D");
    if(i<0 || j<0)
        return 0;
   return gridcells(i-1,j,n,m) +  gridcells(i,j-1,n,m) + gridcells(i-1,j-1,n,m);
}
int main()
{
    int n=0,m=0;
    cout<<gridcells(2,2,n,m);
}