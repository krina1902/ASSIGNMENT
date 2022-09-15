#include<stdio.h>
int main()
{
    int n,rem,max=0;
    printf("enter the num: ");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        if(rem>max){
            max=rem;
        }
        n=n/10;
    }
    printf("maximum number is: %d\n",max);
    return 0;
}