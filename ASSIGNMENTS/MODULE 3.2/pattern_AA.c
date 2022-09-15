#include<stdio.h>
int main()
{
    int i,j;
    char ch=64;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%c ",ch+j);
        }
        printf("\n");
    }
    return 0;
}