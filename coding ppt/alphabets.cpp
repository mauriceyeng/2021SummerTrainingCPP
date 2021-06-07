#include<bits/stdc++.h>
using namespace std;


int main(){
    int count=0;
    char ch='a';
    while(ch<='z'){
        count=int(ch);
        cout<<ch<<endl;
        count++;
        ch=char(count);
    }


return 0;
}