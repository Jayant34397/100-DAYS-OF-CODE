/* WRITE A PROGRAM TO REVERSE A GIVEN NUMBER */

#include<stdio.h>
int main(){
int num,rem;
int reversed = 0;

printf("enter num:");
scanf("%d",&num);

while(num!=0){
    rem=num%10;
    reversed = reversed * 10 + rem ;
    num=num/10;
}

printf("reversed number = %d\n",reversed);

return 0;
}