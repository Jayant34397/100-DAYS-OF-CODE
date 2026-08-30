/* WRITE A PROGRAM TO CHECK IF A NUMBER IS AN ARMSTRONG NUMBER */

#include<stdio.h>
int main(){
int i,num,r,rem,sum=0;

printf("enter the num:");
scanf("%d",&num);

while(num!=0){
    rem= num % 10;
    sum = sum + (r*r*r);
   num=num/10;
}
if(num==sum)
{
    printf("%d is a armstrong number:");
}   
 else{
    printf("%d not a armstrong number:");
 }

    return 0 ;
}