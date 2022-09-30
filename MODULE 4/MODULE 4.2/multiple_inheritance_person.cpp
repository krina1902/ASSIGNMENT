#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    int age;
    public:
    void setdetails1(string name,int age){
        this->name=name;
        this->age=age;
    }
};
class student{
    protected:
    int m1,m2;
    public:
    void setdetails2(int m1,int m2){
        this->m1=m1;
        this->m2=m2;
    }
    
};
class teacher : public person , public student{
    float sal;
    public:
    void setdetails3(float sal){
        this->sal=sal;
    }
    void display(){
        cout<<"the name of the student is "<<name<<endl;
        cout<<"the age of the student is "<<age<<endl;
        cout<<"percantage of the student is "<<(m1+m2)/2<<endl;
        cout<<"salary is "<<sal<<endl;
    }
};
int main(){
    teacher a;
    a.setdetails1("tisha",13);
    a.setdetails2(79,89);
    a.setdetails3(34562.89);
    a.display();
    return 0;
}