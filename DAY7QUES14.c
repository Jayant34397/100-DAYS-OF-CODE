/* WRITE A PROGRAM TO INPUT A CHARACTER AND CHECK WHETHER IT IS A VOWEL OR CONSTANT */

#include<stdio.h>
int main(){
char ch;

printf("enter ch:");
scanf("%d",&ch);

 if(ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u' )
 {
    printf("it is a vowel");
 }
else
{
printf("it is a constant");

}


    return 0;
}