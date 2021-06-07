#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10],n=0,*a,i;
    *a=arr;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"\nEnter values: ";
    for(i=0;i<n;i++){
        cin>>*(a+i);
    }
    cout<<"The entered numbers in reverse are: ";
    for(i=n;i>=0;i++){
        cout<<*(a+i)<<endl;
    }

    



}