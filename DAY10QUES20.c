/*WRITE A PROGRAM TO DISPLAY THE DAY OF THE WEEK BASED ON NUMBER(1-7) USING SWITCH CASE  */

#include<stdio.h>
int main(){

int day;
printf("enter day:");
scanf("%d",&day);
switch(day)
{
case 1:printf("MONDAY");
     break;
case 2:printf("TUESDAY");     
    break;
case 3:printf("WEDNESDAY");
    break;
case 4:printf("THURSDAY");
    break;
case 5:printf("FRIDAY");
     break;
case 6:printf("SATURDAY");
     break;     
case 7:printf("SUNDAY");
      break;
default:printf("enter number between 1-7");

return 0;
}







    return 0;
}