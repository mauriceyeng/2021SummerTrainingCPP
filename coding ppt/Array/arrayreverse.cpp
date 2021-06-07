#include<bits/stdc++.h>
using namespace std;

void reverses(string&  st){
    int n=st.length();
    for(int i=0;i<n/2;i++)
    {
        swap(st[i],st[n-i-1]);
    }
}

int main(){
    string st;
    cout<<"Enter string: ";
    cin>>st;

    reverses(st);
    cout<<st;
    return 0;
    
}