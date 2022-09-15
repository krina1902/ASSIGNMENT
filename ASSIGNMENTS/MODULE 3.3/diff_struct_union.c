#include<stdio.h>
struct emp
{
    int add;
    char name[20];
};
union emp1
{
    int add;
    char name[20];
};
int main()
{
    printf("%d\n",sizeof(struct emp));
    printf("%d\n",sizeof(union emp1));
    return 0;
}