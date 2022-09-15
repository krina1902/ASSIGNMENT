#include<stdio.h>
int main()
{
    int days,i,j;
    float years;
    printf("enter the number of years:\n ");
    scanf("%d",&i);
    printf("enter the number of days:\n ");
    scanf("%d",&j);
    days = i*365;
    years = j/365;
    printf("the days in %d years is %d\n",i,days);
    printf("the years in %d days is %f\n",j,years);
    return 0;
}