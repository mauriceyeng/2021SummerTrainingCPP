#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=10;
    int *y=&x;

    cout<<y<<endl;
    y=y+1;
    cout<<y<<endl;
    y=y+1;
    cout<<y<<endl;

    return 0;
    
    //incrementing pointer
    //datatype* ptr
    //ptr+n==ptr+sizeof(datatype)*n;

    //decrementing pointer
    //datatype* ptr
    //ptr-n==ptr-sizeof(datatype)*n;

    // arr[n]===*(arr+n)
    // arr[0]===*(arr+0)===*arr


}