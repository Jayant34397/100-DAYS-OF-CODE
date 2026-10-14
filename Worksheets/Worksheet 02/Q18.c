/*Write a C program that reads an input from the user and checks if a person’s insurance premium is low, medium, or high based
 on age (< 30 = low, 30–50 = medium, > 50 = high).Print an appropriate message.*/

 #include<stdio.h>
 int main(){
     int age;
     printf("Enter age: ");
     scanf("%d", &age);

     if(age < 30){
         printf("Insurance premium is low.\n");
     }
     else if(age >= 30 && age <= 50){
         printf("Insurance premium is medium.\n");
     }
     else if(age > 50){
         printf("Insurance premium is high.\n");
     }
     else{
         printf("Invalid input.\n");
     }

     return 0;
 }