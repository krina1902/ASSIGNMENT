#include<stdio.h>
int main()
{
    int a[6] = {9,56,650,76,78,67};
    int i,max;
   // printf("enter the numbers: ");
    //scanf("%d",&a[6]);
    max = a[0];
    for(i=0;i<6;i++)
    {
        if(a[i]>max){
            max = a[i];
            
        }
        

    }
    printf("maximum value of the array is %d ",max); 
   
    return 0;
}