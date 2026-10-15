/* WAO TO COUNT THE NUMBER OF DIGIT OF A GIVEN  NUMBER*/

#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter n:");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("the number of digits are: %d \n",count);

    return 0;
}