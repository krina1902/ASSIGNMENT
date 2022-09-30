#include<iostream>
using namespace std;
class matrix{
    int a[1][3];
    public:
    void setdata(){
        cout<<"enter the first matrix(1X3) "<<endl;
        for(int i=0;i<1;i++){
            for(int j=0;j<3;j++){
                cout<<" ";
                cin>>a[i][j];
            }
        }
    }
    void display(){
        for(int i=0;i<1;i++){
            cout<<" ";
            for(int j=0;j<3;j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    matrix operator+(matrix obj){
        int mat[1][3];
        for(int i=0;i<1;i++){
            for(int j=0;j<3;j++){
                mat[i][j]=a[i][j]+obj.a[i][j];
            }
        }
        cout<<"\n.......ADDITION OF TWO MATRIX......\n";
        for(int i=0;i<1;i++){
            cout<<" ";
            for(int j=0;j<3;j++){
                cout<<mat[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
};
int main(){
    matrix m,n;
    m.setdata();
    n.setdata();
    cout<<"\n........FIRST MATRIX.....\n";
    m.display();
    cout<<"\n........second MATRIX.....\n";
    n.display();
    m+n;
    return 0;
}
