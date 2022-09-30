#include<iostream>
using namespace std;
class cal{
    int a,b;
    public:
    cal(int a,int b){
        this->a=a;
        this->b=b;
    }
    void calculator(){
        cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
        cout<<"Substraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
        cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
        cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
    }
};
int main(){
    cal c1(23,4),c2(345,67);
    c1.calculator();
    c2.calculator();
    return 0;
}