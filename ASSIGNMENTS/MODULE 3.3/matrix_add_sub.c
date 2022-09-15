#include<stdio.h>
int main()
{
    int a[3][3]={{2,3,4},{6,7,8},{3,5,7}};
    int b[3][3]={{3,5,7},{9,7,5},{2,6,9}};
    int c[3][3];
    printf("\n............first matrix is.................\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n............second matrix is.................\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\n............addition of matrix is.................\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
        printf("\n............substrction of matrix is.................\n\n");
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]-b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}