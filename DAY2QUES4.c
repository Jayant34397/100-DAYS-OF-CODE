/*WRITE A PROGRAM TO CALCULATE THE AREA AND CIRCUMFERENCE OF A CIRCLLE GIVEN ITS RADIUS*/

#include<stdio.h>
int main(){
float pi=3.14,radius,circumference,area;

printf("enter radius :");
scanf("%f",&radius);

area = pi*radius*radius;
circumference=2*pi*radius;

printf("THE AREA OF THE CIRCLE IS:%f\n",area);
printf("THE CIRCUMFERENCE OF THE CIRCLE IS :%f\n",circumference);

    return 0;
}