#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);

    if(n % 5 == 0 && n % 3 == 0){
        printf("%d is divisible by both 5 and 3\n",n);
      }
     else if(n % 5 == 0){
        printf("%d is divisible by 5\n",n);
      }
     else if(n % 3 == 0){
        printf("%d is divisible by 3\n",n);
      }
     else{
        printf("%d is not divisible by both 5 and 3\n",n);
      }

    return 0;
}