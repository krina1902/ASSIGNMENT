#include<stdio.h>
int main()
{
    int i,j,k,m=9;
    for(i=1;i<=m;i+=2)
    {
        for(k=1;k<=m-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }

return 0;
}