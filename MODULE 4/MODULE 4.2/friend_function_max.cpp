#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(int a){
        this->a=a;
    }
    friend void swap(A obj1,B obj2);
};
class B{
    int a;
    public:
    B(int a){
        this->a=a;
    }
    friend void swap(A obj1,B obj2);
};
void swap(A obj1,B obj2){
    if(obj1.a>obj2.a){
    cout<<"The max number is "<<obj1.a<<endl;
    }
    else{
        cout<<"The max number is "<<obj2.a<<endl;
    }
}
int main(){
    A a1(1000);
    B b1(200);
    swap(a1,b1);
    return 0;
}