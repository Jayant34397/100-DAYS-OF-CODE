#include<stdio.h>
#include<math.h>
int main(){
float p,r,t,ci,amount;

printf("enter principal:");
scanf("%f",&p);


printf("enter rate:");
scanf("%f",&r);


printf("enter time:");
scanf("%f",&t);

amount = p * pow((1+r/100),t);
ci = amount - p;

printf("ci = %2f\n",ci);


    return 0;
}