#include<stdio.h>
int main(){
int time;
printf("enter time in 24 hour format:");
scanf("%d",&time);

if(time>=00 && time<12){
    printf("good morning"); 
}
else if(time>=12 && time<16){
    printf("good afternoon");
}
else if(time>=16 && time<20){
    printf("good evening");
}
else if(time>=20 && time<24){
    printf("good night");
}
return 0;
}