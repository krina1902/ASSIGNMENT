#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20]= "abbakl",s2[20];
    strcpy(s2,s1);
    strrev(s2);
    if(strcmp(s1,s2)==0)
    {
        printf("\nthe string is  palindrome..!!!\n");
    }
    else{
        printf("\nthe string is not palindrome...!!!\n");
    }
    printf("%s",s2);
    return 0;
}