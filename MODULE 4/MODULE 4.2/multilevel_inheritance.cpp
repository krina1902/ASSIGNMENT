#include<iostream>
using namespace std;
class students{
    protected:
    int rollno;
    public:
    void setroll(int rollno){
        this->rollno=rollno;
    }
};
class test : public students{
    protected:
    int m1,m2;
    public:
    void setmarks(int m1,int m2){
        this->m1=m1;
        this->m2=m2;
    }
};
class result : public test{
    public:
    void display(){
    cout<<"Roll no. of the student is "<<rollno<<endl;
    cout<<"Total marks of the student out of 200 is "<<m1+m2<<endl;
    cout<<"mark in physics is "<<m1<<endl;
    cout<<"mark in maths is "<<m2<<endl;
    }
};
int main(){
    result r1;
    r1.setroll(001);
    r1.setmarks(89,90);
    r1.display();
    return 0;
}