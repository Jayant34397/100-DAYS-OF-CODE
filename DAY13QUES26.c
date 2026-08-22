/*WRITE A PROGRAM TO PRINT NUMBERS FROM 1 TO n*/

#include<stdio.h>
int main(){
int n,i ;

printf("enter n:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    printf("numbers from 1 to n are:%d\n",i);
}

return 0;
}

