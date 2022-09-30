#include<iostream>
using namespace std;
template <typename t1>
    void sort(t1 a[],int n){
     for(int i=0; i < n; i++){
        for(int j=i+1;j < n;j++){
            if(a[i]>a[j]){
                t1 temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                }
            }
        }
     }
    template <typename t1>
     void display(t1 a[],int n){
        for(int i=0;i<n;++i)
        cout<<a[i]<<" ";
        cout<<"\n\n";
     }   
    
    int main(){
         int a[]={1,10,90,100,-1,11,9,14};
         int n=sizeof(a)/sizeof(int);
         cout<<"ARRAY BEFORE SORTING"<<endl;
         display(a,n);
         sort(a,n);
           cout<<"ARRAY AFTER SORTING"<<endl;
           display(a,n);
        return 0;
    }
