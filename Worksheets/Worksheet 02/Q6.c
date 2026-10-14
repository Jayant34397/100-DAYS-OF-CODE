#include<stdio.h>
int main(){
int day;

printf("enter day(1-7):");
scanf("%d",&day);

if(day == 1 || day == 2 || day == 3 || day == 4 || day == 5 ){
    printf("it is a weekday");
}
else{
    printf("it is a weekend");
}

    return 0;
}