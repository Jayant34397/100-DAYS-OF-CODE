/*Write a program to input two numbers and display their sum.*/

#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf ("%d", &b);
    sum = a + b;
    printf("sum of a and b is :%d\n",sum);
    return 0;
}