/* WRITE A PROGRAM TO FIND PROFIT OR LOSS PERCENTAGE GIVEN COST PRICE AND SELLING PRICE*/

#include<stdio.h>
int main(){
 
    float cp,sp,amount,profit,percentage;

    printf("enter cp ");
    scanf("%f",&cp);

    printf("enter sp");
    scanf("%f",&sp);

if (sp>cp) {
amount = sp - cp;
percentage = (amount/cp)*100;
printf("profit = %f\n",amount);
printf("profit percentage = %f\n",percentage);
}  
else if (cp>sp) {
amount = cp-sp;
percentage = (amount/cp)*100;
printf("loss = %f\n",amount);
printf("loss percentage = %f\n",percentage);
}
else {
    printf("no profit,no loss\n");
    
}


    return 0;
}