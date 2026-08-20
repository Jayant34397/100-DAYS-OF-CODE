/* WRITE A PROGRAM TO INPUT A YEAR AND CHECK WHETHER IT IS A LEAP YEAR OR NOT */

#include<stdio.h>
int main(){

int year ;

printf("enter year");
scanf("%d",&year);

if (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0)) {

    printf("leap year\n",year);
}
else
{
    printf("not a leap year\n",year);
}


    return 0;
}