#include<iostream>
using namespace std;
template <class t1, class t2>
class A{
    t1 a;
    t2 b;
    public:
    A(t1 a,t2 b){
        this->a=a;
        this->b=b;
    }
    void swap(){
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"After the swap of a and b is "<<a<<" and "<<b<<endl;
    }
};
int main(){
    A <int,int> a1(23,45);
    a1.swap();
    return 0;
}