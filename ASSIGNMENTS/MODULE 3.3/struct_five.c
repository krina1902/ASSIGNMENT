#include<stdio.h>
struct emp
{
    int empno;
    char empname[29];
    char add[29];
    int age;
};
int main()
{
    struct emp e1 = {22,"albert","surat",45};
    printf("%d %s %s %d\n",e1.empno,e1.empname,e1.add,e1.age);
    struct emp e2 = {23,"galelio","vadodra",56};
    printf("%d %s %s %d\n",e2.empno,e2.empname,e2.add,e2.age);
    struct emp e3 = {24,"robert","ahemdabad",44};
    printf("%d %s %s %d\n",e3.empno,e3.empname,e3.add,e3.age);
    struct emp e4 = {25,"hook","surat",59};
    printf("%d %s %s %d\n",e4.empno,e4.empname,e4.add,e4.age);
    struct emp e5 = {26,"enstien","surat",75};
    printf("%d %s %s %d\n",e5.empno,e5.empname,e5.add,e5.age);
    return 0;
}