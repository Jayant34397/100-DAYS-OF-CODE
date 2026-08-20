/*WRITE A PROGRAM TO SWAP TWO NUMBERS USING A THIRD VARIABLE*/

#include<stdio.h>
int main(){

    int a,b,c;
    
    printf("enter a:");
    scanf("%d",&a);

    printf("enter b:");
    scanf("%d",&b);

    printf("before swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    c=a;
    a=b;
    b=c;

    printf("after swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    return 0;

}
