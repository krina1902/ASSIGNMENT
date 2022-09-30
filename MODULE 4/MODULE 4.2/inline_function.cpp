#include<iostream>
using namespace std;
inline void multiplication(int a,int b){
    cout<<"the multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
};
inline void cubic(int c){
    cout<<"the cube of "<<c<<" is "<<c*c*c<<endl;
};
int main(){
    multiplication(2,3);
    cubic(9);
    return 0;
}