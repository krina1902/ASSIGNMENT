#include<stdio.h>
int main()
{
    char s[20]= "KRINA ANTALA";
    int i,count=0;
    for(i=0;s[i]!='\0';i++){
        count++;
    }
    printf("length of the word is %d\n",count);
    return 0;
}