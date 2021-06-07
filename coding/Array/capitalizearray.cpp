#include<bits/stdc++.h>
using namespace std;

string capita(string txt){
    for( int i=0;i<txt.length();i++)
    {
        if(x==0)
        {
            txt[i]=topupper(txt[i]);
        }
        else if(txt[i-1]==' ')
        {
            txt[i]=toupper(txt[i]);
        }
    }
    return txt;
}

int main(){
    string inp;
    cout<<"Type a sentence: ";
    cin>>inp;
    cout<<"Capitalized every first letter of the sentence: "<<capita(inp);
    return 0;
}