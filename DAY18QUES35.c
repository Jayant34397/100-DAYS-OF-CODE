/* WRITE A PROGRAM TO PRINT ALL FACTORS OF A GIVEN NUMBER */

# include<stdio.h>
int main(){
int number,i;

printf("enter number:");
scanf("%d",&number);

printf("THE FACTORS OF GIVEN NUMBER IS %d\n,number");

for(i=1;i<=number;i++){
    if(number % i == 0){
        printf(" %d",i);
    }
}
return 0;
}
