/* write a program to swap 2 numbers without using the third variable */

#include<stdio.h>
int main(){

int a,b;
printf("enter a:");
scanf("%d",&a);

printf("enter b:");
scanf("%d",&b);

printf("before swwapping: a= %d,b=%d\n",a,b);

a=a^b;
b=a^b;
a=a^b;

printf("after swapping: a=%d,b=%d\n",a,b);


    return 0;
}