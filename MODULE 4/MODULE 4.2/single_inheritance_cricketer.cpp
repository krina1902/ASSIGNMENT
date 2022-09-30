#include<iostream>
using namespace std;
class cricketer{
    protected:
    string name,n;
    int r1,r2;
    public:
    void setdata(string name){
        this->name=name;
    }
    void setdata1(int r1,int r2){
        this->r1=r1;
        this->r2=r2;
    }
};
class batsman : public cricketer{
    public:
    void display(){
        cout<<"the run in first over is "<<r1<<endl;
        cout<<"the run in second over is "<<r2<<endl;
        cout<<"the total runs are "<<r1+r2<<endl;
        cout<<"average runs are "<<(r1+r2)/2<<endl;
        cout<<"the best perfomance of "<<name<<endl;
    }

};
int main(){
    batsman b1;
    b1.setdata("kohli");
    b1.setdata1(22,12);
    b1.display();
    return 0;
}