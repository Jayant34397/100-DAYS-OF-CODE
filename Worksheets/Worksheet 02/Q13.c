/*Write a C program that reads an input from the user and check if a number is divisible by both 5 and 25 but not by 100.
Print an appropriate message.*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 5 == 0 && num % 25 == 0 && num % 100 != 0){
        printf("The number is divisible by both 5 and 25 but not by 100.\n");
    }
    else{
        printf("not valid\n");
    }

    return 0;
}
