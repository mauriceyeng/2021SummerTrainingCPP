#include<bits/stdc++.h>
using namespace std;

class fac{
    int x,i;
    public:
        int facto(int a){
            for(i=a;i>0;i--){
                x=a*a-1;
            }
            return x;
        }

}A;

int main(){
    int y;
    cout<<"Enter the number: ";
    cin>>y;
    cout<<"Factorial of "<<y<<" is: ";
    A.facto(y);
    return 0;

}