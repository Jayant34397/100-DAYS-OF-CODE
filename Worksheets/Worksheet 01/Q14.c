#include<stdio.h>
int main(){
     int age;
     printf("enter age:");
     scanf("%d",&age);

     if(age >= 18){
        printf("eligible to vote in india");
     }
        else{
            printf("not eligible to vote in india");
        }
     return 0;
}