#include<stdio.h>
int main()
{
    float r,pi,area;
    printf("enter the value od radius r:");
    scanf("%f",&r);
    pi=(22/7);
    area = pi* r * r;
    printf("area of circle is %f ",area);
    return 0;
}