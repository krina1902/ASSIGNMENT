#include<stdio.h>
#include<math.h>
int main()
{
    int num,even=0,odd=0,counteven=0,countodd=0,i;
    for(i=1;i<=10;i++){
        printf("the number%d= ",i);
        scanf("%d",&num);
        if(num%2==0){
            counteven++;
            even=even+num; 
           
        }
        else if(num%2 != 0){
            countodd++;
           odd=odd+num;
           
        }
        
    }
       printf("the count of even numbers are %d\n",counteven);
       printf("the count of odd numbers are %d\n",countodd);
       printf("the sum of even numbers is %d\n",even);
       printf("the sum of odd numbers is %d\n",odd);
       return 0;
}