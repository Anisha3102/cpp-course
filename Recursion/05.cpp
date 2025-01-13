#include<bits/stdc++.h>
using namespace std;
void printsub(string s,int i,string path)
{
    if(i==s.length())
    {
        cout<<'"'<<path<<'"'<<"\n";
        return;
    }
    //yes
    printsub(s,i+1,path+s[i]);
    //no
    printsub(s,i+1,path);
}
int main() {
   
   string s="abc";
   printsub(s,0,"");
}