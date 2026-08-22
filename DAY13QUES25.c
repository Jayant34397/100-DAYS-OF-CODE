/*WRITE A PEOGRAM TO IMPLEMENT A BASIC CALCULATOR USING SWITCH-CASE FOR +,-,/,*,% */

#include<stdio.h>
int main(){
char operator;
int num1,num2,result;

printf("enter an operator: ");
scanf(" %c",&operator);

printf("enter two integers:");
scanf("%d %d",&num1,&num2);

switch(operator) {
    case '*':
    result=num1*num2;
    printf("%d * %d = %d\n",num1,num2,result);
        break;

    case'/':
    if(num2!= 0) 
    { 
        result = num1 / num2 ;
        printf("%d / %d = %d\n",num1,num2,result);
    }
    else{
    printf("error");
     }
      break;

    case'+':
    result= num1 + num2 ;
    printf("%d + %d = %d\n",num1,num2,result);
          break;

    case'-':
    result = num1-num2;
    printf("%d - %d = %d\n",num1,num2,result);
           break;

    case'%':
    if(num2!=0) 
    {
        result = num1 % num2; 
        printf("%d %% %d = %d\n",num1,num2,result);
    }
    else{
        printf("error");
    }
            break;
    default:
            printf("Invalid operator\n");
            break;
}
    
    return 0;
}
