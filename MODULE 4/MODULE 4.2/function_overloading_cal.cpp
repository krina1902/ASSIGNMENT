#include<iostream>
using namespace std;
int cal(int a,int b){
    cout<<"The addition of "<<a<< " and " <<b<< " is " <<a+b<<endl;
    return 0;
} 
float cal(int c,double d){
    cout<<"The Substraction of "<<c<<" and "<<d<< " is " <<c-d<<endl;
    return 0;
}
float cal(double e,int f){
    cout<<"The Division of "<<e<< " and " <<f<< " is " <<e/f<<endl;
    return 0;
}
float  cal(double g,double h){
    cout<<"The Multiplication of "<<g<< " and " <<h<< " is " <<g*h<<endl;
    return 0;
}
int main(){
    cal(7,9);
    cal(2,4.0f);
    cal(3.0f,3);
    cal(2.3f,5.6f);
}