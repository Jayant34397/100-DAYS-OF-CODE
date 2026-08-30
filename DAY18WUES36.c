/*WRITE A PROGRAM TO FIND THE HCF OF TWO NUMBERS */

#include<stdio.h>
int main(){
int a,b,hcf;

printf("enter two numbers:");
scanf("%d %d",&a,&b);

while(b!=0)
{
    hcf = a % b;
    a=b;
    b=hcf;
}
printf("hcf=%d",a);

return 0;
}