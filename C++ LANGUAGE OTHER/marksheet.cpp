#include<iostream>
using namespace std;
class marksheet{
static int no;
string name;
float a,b,c,per;
public:
void set(string n){
    name=n;
}
void marks(float a, float b, float c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}
void get(){
    no++;
    per=(a+b+c)/3;
    cout<<no<<" "<<name<<" "<<per<<endl;
}
};
int marksheet::no;
int main()
{
    marksheet a,b;
    a.set("albert");
    a.marks(56.6,67.7,90.6);
    a.get();
    b.set("bertly");
    b.marks(86.6,87.7,97.6);
    b.get();
    return 0;
}