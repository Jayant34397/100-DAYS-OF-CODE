#include<stdio.h>
int main(){
    int a,b,sum,difference,product,quotient,remainder;
    printf("enter a:");
    scanf("%d",&a);

    printf("enter b:");
    scanf("%d",&b);

    sum=a+b;
    printf("sum is:%d",a+b);

    difference=a-b;
    printf("difference is:%d",a-b);

    product=a*b;
    printf("product is:%d",a*b);

    quotient=a/b;
    printf("quotient is:%d",a/b);

    remainder=a%b;
    printf("remainder is:%d",a%b);

return 0;

}