/*WRITE A PROGRAM THAT ACCEPTS A PERCENTAGE(0-100) AND ASSIGNS A GRADE 
BASED ON THE FOLLOWING CRITERIA:
90-100:GRADE A 
80-89:GRADE B
70-79:GRADE C
60-69:GRADE D
BELOW 60:GRADE F
*/

#include<stdio.h>
int main(){
    int percentage;

 printf("enter percentage:");
scanf("%d",& percentage);

if( percentage >=90 && percentage <=100)
{
    printf("GRADE A");
}
else if (percentage >=80 && percentage <=89)
{
    printf("GRADE B");
}
else if (percentage >=70 && percentage <=79)
{
    printf("GRADE C");
}
else if (percentage >=60 && percentage <=69)
{
  printf("GRADE D");   
}
else
{
    printf("GRADE F");
}
    return 0;
}