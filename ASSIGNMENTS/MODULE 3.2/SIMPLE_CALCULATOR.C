#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);
    printf("ADDITION OF %d AND %d IS %d\n",a,b,a+b);
    printf("SUBSTRACTION OF %d AND %d IS %d\n",a,b,a-b);
    printf("DIVISION OF %d AND %d IS %d\n",a,b,a/b);
    printf("MULTIPLICATION OF %d AND %d IS %d\n",a,b,a*b);
    printf("MODULO OF %d AND %d IS %d\n",a,b,a%b);
    return 0;
}