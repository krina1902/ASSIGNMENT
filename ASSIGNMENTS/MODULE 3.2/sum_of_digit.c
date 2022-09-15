#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("enter the num: ");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    printf("the summation is = %d\n",sum);
    return 0;
}