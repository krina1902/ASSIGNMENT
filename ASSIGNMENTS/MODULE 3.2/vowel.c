#include<stdio.h>
int main()
{
    char alpha;
    printf("enter the any alphabet: ");
    scanf("%c",&alpha);
    switch(alpha){
        case 'a': case 'A':
            printf("your alphabet is vowel !!!!!\n");
            break;
        case 'e': case 'E':
            printf("your alphabet is vowel !!!!!\n");
            break;
        case 'i': case 'I':
            printf("your alphabet is vowel !!!!!\n");
            break;
        case 'o': case 'O':
            printf("your alphabet is vowel !!!!!\n");
            break;
        case 'u': case 'U':
            printf("your alphabet is vowel !!!!!\n");
            break;
        default:
        printf("your alphabet is constonat.....\n");
        
    }
    return 0;
}