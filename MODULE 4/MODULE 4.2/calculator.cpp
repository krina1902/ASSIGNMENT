#include<iostream>
using namespace std;
class cal{
    int a,b;
    public:
    void setdata(int a,int b){
    this->a=a;
    this->b=b;
    }
    void addtion(){
        cout<<"addtion of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }
        void substraction(){
        cout<<"substraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
    }
        void multiplication(){
        cout<<"multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
    }
        void division(){
        cout<<"division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
    }
};
int main()
{
    cal c1,c2;
    c1.setdata(34,2);
    c1.addtion();
    c1.multiplication();
    c2.setdata(23,5);
    c2.substraction();
    c2.division();
    return 0;
}