/* WRITE A PROGRAM TO CHECK IF A NUMBER IS A PALINDROME*/

#include<stdio.h>
int main(){
int num,rem;
int sum =0;

printf("enter num:");
scanf("%d",&num);

while(num!=0){
    rem=num % 10;
    sum =( sum *10)+ rem;
    num = num / 10;
}
if(sum == num)
{
    printf("%d is palindrome\n",num );
}
else{
    printf("%d is not a palindrome\n",num);
}

    return 0;
}