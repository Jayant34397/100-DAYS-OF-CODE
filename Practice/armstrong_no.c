#include<stdio.h>
int main(){
    int n,a,b,c,sum;
    printf("enter n:");
    scanf("%d",&n);
    a=n/100;
    b=(n/10)%10;
    c=n%10;
    sum=a*a*a + b*b*b + c*c*c;

    if(sum == n){
        printf("its a armstrong no.");
    }
    else{
        printf("not a armstrong no.");
    }
    
    return 0;
}
