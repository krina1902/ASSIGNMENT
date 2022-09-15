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
    struct emp e = {22,"albert","surat",45};
    printf("%d %s %s %d\n",e.empno,e.empname,e.add,e.age);
    return 0;
}