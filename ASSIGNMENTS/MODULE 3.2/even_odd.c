#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of n: ");
    scanf("%d",&n);
    (n%2 == 0)? printf("your number is even...\n") : printf("your number is odd....\n");
    return 0;
}