#include<iostream>
using namespace std;
void Area(int r){
    cout<<"The area of circle is "<<3.14*r*r<<endl;
} 
void Area(int l,int w){
    cout <<"The area of triangle is "<<0.5*l*w<<endl;
}
void Area(double s,int d){
    cout <<"The area of rectangle is "<<s*d<<endl;
}
int main(){
    Area(3);
    Area(7,8);
    Area(2.0f,4);
    return 0;
}