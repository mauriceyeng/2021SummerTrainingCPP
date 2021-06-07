#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z, *xp,*yp,*zp,*mx;
    cout<<"Enter x,y,and z";
    cin>>x>>y>>z;
    xp=&x;
    yp=&y;
    zp=&z;

    if(*xp>*yp && *xp>*zp){
        mx=xp;
    }
    else if(*yp>*xp && *yp>*zp){
        mx=yp;
    }
    else{
        mx=zp;
    }
    cout<<"Largest number is: "<<*mx;



    return 0;
}