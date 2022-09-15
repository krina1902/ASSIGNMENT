#include<stdio.h>
int main()
{
    float P,R,N,S;
    printf("enter the principal amount:\n");
    scanf("%f",&P);
    printf("enter the rate of intrest:\n");
    scanf("%f",&R);
    printf("enter the number of period: \n");
    scanf("%f",&N);
    S = (P*R*N)/100;
    printf("simple interest is %f: \n",S);
    return 0;
}