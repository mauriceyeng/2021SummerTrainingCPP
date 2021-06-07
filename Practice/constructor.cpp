#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    string school;
    int roll;
    int age;

    void introduce(){
        cout<<"Name: "<<name<<endl;
        cout<<"School: "<<school<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};

int main(){
    Student s;
    s.name="Maurice";
    s.school="LPU";
    s.age=23;
    s.roll=21;

    s.introduce();
    return 0;
}