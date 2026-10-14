/*Write a C program that reads an input from the user and 3. Check if a given hour is a working hour (9 AM– 6PM) or not. 
Print an appropriate message.*/

#include<stdio.h>
int main(){
int hour;
printf("Enter hour (0-23): ");
scanf("%d",&hour);

if(hour>=9 && hour<=18){
    printf("It's a working hour.\n");
}
else{   
    printf("It's not a working hour.\n");
}

    return 0;
}