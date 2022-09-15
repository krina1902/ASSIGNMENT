#include<stdio.h>
int main(){
    int   option,a=23 ,b=45 ;
    printf("choose case 1 for addition\n");
    printf("choose case 2 for substraction\n");
    printf("choose case 3 for multiplication\n");
    printf("choose case 4 for division\n");
    printf("your option is: ",option);
    scanf("%d ", &option);
    switch(option)
    {
        case 1:
        printf("addition of %d and %d is %d \n",a,b,a+b);
        break;
    case 2:
        printf("substraction of %d and %d is %d \n",a,b,a-b);
        break;
    case 3:
        printf("multiplication of %d and %d is %d \n",a,b,a*b);
        break;
    case 4:
        printf("division of %d and %d is %d \n",a,b,a/b);
        break;
    default:
    printf("your choice is not given here....!!!");
    }
    return 0;
}