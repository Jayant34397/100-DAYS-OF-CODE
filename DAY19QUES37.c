/* WRITE A PROGRAM TO FIND THE LCM OF TWO NUMBERS*/

#include<stdio.h>
int main(){
int a,b,i,LCM;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);

    for (i=( a>b ? a:b); ; i++)
{
    if (i % a == 0 && i % b == 0)
    {
        LCM=i;
        break;
    }
}
printf("LCM = %d",LCM);

    return 0;
}