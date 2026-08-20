/* WRITE A PROGRAM TO INPUT TIME IN SECONDS AND CONVERT IT INTO HOURS:MINUTES:SECONDS FORMAT*/

#include<stdio.h>
int main(){
  int seconds,hours,minutes;
  printf("enter time in seconds:");
  scanf("%d",&seconds);

  hours = seconds / 3600 ;
  minutes = seconds % 3600 ;
  seconds = seconds % 60 ;


printf("TIME IN HOURS:MINUTES:SECONDS FORMAT:%d,%d,%d\n",hours,minutes,seconds);


    return 0;
}