#include<iostream>
using namespace std;
class A{
    string s;
    public:
    A() {}
    A(string s){
        this->s=s;
    }
    void display(){
        cout<<s<<endl;
    }
    A operator+ (A obj){
        A temp;
        temp=s+obj.s;
        return temp;
    }
};
int main(){
    A a1("KRINA"),a2(" "),a4("ANTALA");
    A a3=a1+a2+a4;
    a3.display();
    return 0;
}