#include<iostream>
using namespace std;
class BANK{
    string name;
    string type;
    int ac;
    float b,d,w;
    public:
    void setdetails1(string name,int ac){
        this->name=name;
        this->ac=ac;
    }
    void setdetails2(string type,float b){
        this->type=type;
        this->b=b;
    }
    void setdata(float d,float w){
          this->d=d;
          this->w=w;
    }
    void display(){
        cout<<"Name of the dipositor is "<<name<<endl;
        cout<<"Balance of the acoount is "<<float(b+d)-w<<endl;
    }

};
int main(){
    BANK a;
    a.setdetails1("KRINA",1234567890);
    a.setdetails2("SAVING ACCOUNT", 34545.9);
    a.setdata(12343.6, 3456.90);
    a.display();
    return 0;
}