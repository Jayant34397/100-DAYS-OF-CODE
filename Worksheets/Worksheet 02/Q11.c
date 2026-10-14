#include<stdio.h>
int main(){
int n;

printf("enter n:");    
scanf("%d",&n);

if(n >=1 && n <= 100){
    printf("inside");
}
else{
    printf("outside");
}

    return 0;
}