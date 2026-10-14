#include<stdio.h>
int main(){
int n;

printf("enter n:"); 
scanf("%d",&n);

if(n % 2 == 0){
    printf("number is a multiple of 2");
}
else if(n % 3 == 0){
    printf("number is a multiple of 3");
}
else if(n % 5 == 0){
    printf("number is a multiple of 5");
}
else{
    printf("none of them");
}

    return 0;
}