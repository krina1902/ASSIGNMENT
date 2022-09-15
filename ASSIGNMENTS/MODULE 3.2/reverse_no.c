#include<stdio.h>
int main()
{
    int n,rem;
    printf("number is: ");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        n=n/10;
        printf("%d",rem);
    }
    printf("\n");
    return 0;
}