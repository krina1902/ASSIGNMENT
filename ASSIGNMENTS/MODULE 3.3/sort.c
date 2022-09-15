#include<stdio.h>
int main()
{
    int i, j ,temp;
    int a[7] = { 43, 23, 15, 67 ,3,75,33};
    printf("asecending number is: ");
    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

        }
        
        printf("%d\t",a[i]);
    }
    printf("\ndescending number is: ");
    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

        }
        printf("%d\t",a[i]);
    }
    return 0;
}