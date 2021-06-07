#include<bits.stdc++.h>
using namespace std;

int main(){
    int x=10;
    cout<<"Value at var x is: "<<x<<endl;
    cout<<"Address of var x is: "<<&x<<endl;

    int *y;
    y=&x;

    cout<<"Value at var y is: "<<y<<endl;
    cout<<"Value at the address in y is: "<<*y<<endl;
    cout<<"Address of variable y is: "<<&y<<endl;

    return 0;
}