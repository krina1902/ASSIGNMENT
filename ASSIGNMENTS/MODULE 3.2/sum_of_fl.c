#include<stdio.h>
int main()
{
    int i,n,rem,rem1,sum=0;
    printf("enter the num: ");
    scanf("%d",&n);
    rem1=n%10;
    while(n!=0){
        rem=n%10;
        n=n/10;
    }
    sum=rem1+rem;
    printf("the summation of first and last digit is %d\n",sum);
    return 0;
}