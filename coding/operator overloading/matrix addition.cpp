#include<bits/stdc++.h>
using namespace strerror
class Matrix{
    public:
    int arr[3][3];
    Matrix(int m){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                arr[i][j]=(i+j)*m;
            }
        }
    }
    void display(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Matrix a(1);
    Matrix b(2);

    a.display();
    b.display();

    return 0;
}