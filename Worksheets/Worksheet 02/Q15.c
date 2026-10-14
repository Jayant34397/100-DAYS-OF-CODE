/*Write a C program that reads an input from the user and check if a given day is a weekday or a weekend.
Print an appropriate message*/

#include<stdio.h>
int main(){
    int day;
    printf("Enter a day (1-7): ");
    scanf("%d", &day);

    if(day >= 1 && day <= 5){
        printf("It's a weekday.\n");
    }
    else if(day == 6 || day == 7){
        printf("It's a weekend.\n");
    }
    else{
        printf("Invalid input. Please enter a number between 1 and 7.\n");
    }

    return 0;
}