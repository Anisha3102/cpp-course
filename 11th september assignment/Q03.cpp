// 3.user product ek string enter karega
// LUx Lux LuX = Soap
// ViVel  =Soap
// lIFEbOUY =soap

// gooday =biscuit
// snacks = biscuit
// marigold = biscuit

// Axe = perfume
// Vellavita =perfume
// fog = perfume


#include<bits/stdc++.h>
using namespace std;
string fxn(string name)
{
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    if(name=="lifebouy" || name=="vivel" ||name=="lux" )
        return "Soap";
    else if(name=="goodday" || name =="parleg" || name=="darkfantasy")
        return "Biscuit";
    else if(name == "axe" || name == "bellavita" || name=="fog")
        return "Perfumes";
    else
        return "Invalid Keyword";
       
}
int main()
{
    string name;
    cout<<"Enter the string\n";
    cin>>name;
    cout<<fxn(name);
}

