/*WRITE A PROGRAM TO CALCULATE LIBRARY FINE BASED ON LATE DAYS AS FOLLOWS:
FIRST 5 DAYS LATE:RS 2/DAY
NEXT 5 DAYS LATE:RS 4/DAY
NEXT 20 DAYS LATE:RS 6/DAY
MORE THAN 30 DAYS:MEMBERSHIP CANCELLED*/

#include<stdio.h>
int main(){
    int days;
    printf("enter number of late days:");
    scanf("%d",&days);

if(days<=5){
   printf("FINE OF RS 2/day");
}
else if(days<=10){
    printf("FINE OF RS 4/day");
}
else if(days<=30){
    printf("FINE OF RS 6/day");
}
else {
    printf("MEMBERSHIP CANCELLED");
}    
return 0;
}