#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of A before swap: ");
    scanf("%d",&a);
    printf("enter the value of B before swap: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of A after swap:%d\n ",a);
    printf("the value of B after swap:%d\n ",b);
    return 0;
}