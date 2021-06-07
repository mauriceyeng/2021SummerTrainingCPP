#include<bits/stdc++.h>
using namespace std;

int main(){
    int count;
    char *pt,words[]="My name is Maurice";
    
    while((*pt)!='\0'){
        if(*pt=='a' || *pt=='e' || *pt=='i' || *pt=='o' || *pt=='u')
        {
            count++;
        }
        pt++;

    }
    return 0;
}