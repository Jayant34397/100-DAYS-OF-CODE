/*Write a C program that reads an input from the user and check if a person’s metro fare is 
based on distance: < 2 km = 10, 2–5 km = 20, > 5 km = 30. Print an appropriate message.*/

#include<stdio.h>
int main(){ 
    float distance;
    printf("Enter distance in km: ");
    scanf("%f", &distance);

    if(distance < 2){
        printf("Metro fare is 10\n");
    }
    else if(distance >= 2 && distance <= 5){
        printf("Metro fare is 20\n");
    }
    else if(distance > 5){
        printf("Metro fare is 30\n");
    }
    else{
        printf("Invalid input.\n");
    }

    return 0;
}