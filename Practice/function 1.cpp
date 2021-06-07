#include<bits/stdc++.h>
using namespace std;

int addition(int a, int b){
    int sum=a+b;
    return sum;
}

int subtraction(int a, int b){
    int sum=a+b;
    return sum;
}

int main(){
    int a,b,
    cin>>a>>b;

    cout<<"Enter the option \n";
    cout<<"1. Add the nums \n";
    cout<<"2. Sub the nums \n";
    cout<<"Response: ";

    int res;
    cin>>res;

    int sum=addition(a,b);
    int sub=subtraction(a,b);
    if(res==1){
        cout<<"the sum of entered numbers is: "<<sum;
    }
    else if(res==2){
        cout<<"The difference of entered numbers is: "<<sub;
    }
    else if(res==3){
        break;
    }
    
    

    return 0;
}