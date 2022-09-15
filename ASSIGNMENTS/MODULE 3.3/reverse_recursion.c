#include<stdio.h>
void reverse(char *s)
{
    if(*s){
        reverse(s+1);
        printf("%c",*s);
    }
}
int main()
{
    char a[]="hello world";
    reverse(a);
    return 0;
}