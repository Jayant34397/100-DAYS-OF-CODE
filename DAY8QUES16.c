 /* WRITE A PROGRAM TO INPUT THREE NUMBERS AND FIND THE LARGEST AMONG THEM */

#include<stdio.h>
int main(){
int a,b,c;

printf("enter a :");
scanf("%d",&a);

printf("enter b:");
scanf("%d",&b);

printf("enter c :");
scanf("%d",&c);

if(a>b && a>c){
    printf("a is largest\n");
}
else if (b>a && b>c){
    printf("b is largest\n");
}
else{
    printf("c is largest\n");
}
    return 0;

}