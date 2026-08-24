/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/

#include<stdio.h>
int main(){
int units,bill ;

printf("enter units:");
scanf("%d",&units);

if(units <=100){
    printf("RS 5 /unit\n");
    bill = units*5;
}
else if(units <=200){
    printf("RS 7/unit");
    bill = units*7;
}
else if(units <=300){
    printf("RS 10/unit");
    bill = units*10 ;   
}
else{
    printf("RS 12/unit");
    bill = units*12;
}
printf("electricity bill = RS %d\n",bill);
    return 0;
}