#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch[30];
    int i,v=0;

    cout<<"Enter string: ";
    gets(ch);

    for(i=0;ch[30];i++){
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
        {
            v++;
        }
    }

    cout<<"Total vowels in the strings: "<<v;

    return 0;
}