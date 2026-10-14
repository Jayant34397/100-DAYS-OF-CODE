/*Write a C program that reads an input from the user and 
check if a student’s grade is A, B, C, D, or F based on marks (90, 80, 70, 60, else F).
Print an appropriate message. Sample Input:*/

#include<stdio.h>
int main(){
int marks;
printf("Enter marks: ");
scanf("%d",&marks);
if(marks>=90){  
    printf("Grade: A");
}
else if(marks>=80 && marks<90){
    printf("Grade: B");
}
else if(marks>=70 && marks<80){
    printf("Grade: C");
}
else if(marks>=60 && marks<70){
    printf("Grade: D");
}
else{
    printf("Grade: F");
}
    return 0;
}