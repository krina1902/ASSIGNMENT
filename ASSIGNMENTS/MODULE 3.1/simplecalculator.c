#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the values: ");
    scanf("%d %d",&a,&b);
    printf("addition of %d and %d is %d\n",a,b,a+b);
    printf("substraction of %d and %d is %d\n",a,b,a-b);
    printf("multiplication of %d and %d is %d\n",a,b,a*b);
    printf("division of %d and %d is %d\n",a,b,a/b);
    printf("modulus of %d and %d is %d\n",a,b,a%b);
    return 0;

}