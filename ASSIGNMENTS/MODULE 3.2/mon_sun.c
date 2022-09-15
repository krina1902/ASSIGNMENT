#include<stdio.h>
int main()
{
    int option;
    printf("choose option no 1 for monday\n");
    printf("choose option no 2 for tuesday\n");
    printf("choose option no 3 for wednesday\n");
    printf("choose option no 4 for thursday\n");
    printf("choose option no 5 for friday\n");
    printf("choose option no 6 for saturday\n");
    printf("choose option no 7 for sunday\n");
    printf("YOUR OPTION IS: ");
    scanf("%d",&option);
    switch (option){
        case 1:
        printf("HELLO, TODAY IS MONDAY!!!!!\n");
        break;
        case 2:
        printf("HELLO, TODAY IS TUESDAY!!!!!\n");
        break;
        case 3:
        printf("HELLO, TODAY IS WEDNESDAY!!!!!\n");
        break;
        case 4:
        printf("HELLO, TODAY IS THURSDAY!!!!!\n");
        break;
        case 5:
        printf("HELLO, TODAY IS FRIDAY!!!!!\n");
        break;
        case 6:
        printf("HELLO, TODAY IS SAYURDAY!!!!!\n");
        break;
        case1:
        printf("HELLO, TODAY IS MONDAY!!!!!\n");
        break;
        default:
        printf("PLEASE ENTER VALID OPTION....!!!!!\n");
    }
        return 0;
}