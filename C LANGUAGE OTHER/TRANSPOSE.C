#include<stdio.h>
int main()
{
    int a[3][3];
    printf(">>>>>>>>>>>>>THE MATRIX IS<<<<<<<<<<<<<<<\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("enter the value of a[%d][%d] index position: ",i,j);
        scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
        printf(">>>>>>>>>>>>>THE MATRIX IS<<<<<<<<<<<<<<<\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf(">>>>>>>>>>>>>TRANSPOSE OF MATRIX IS<<<<<<<<<<<<<<<\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}