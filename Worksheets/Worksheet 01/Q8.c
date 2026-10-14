#include<stdio.h>
int main(){
    float c,f;
    printf("enter temperature in celcius:");
    scanf("%f",&c);

    f=((9/5)*c+32);

    printf("temperature in fahrehiet is:%f",f);

    return 0;
}