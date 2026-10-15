/*FIND THE MISSING ELEMENT*/

#include<stdio.h>
int main(){
int a[99],sum=0,missing;
for(int i = 0; i< 99;i++){
    scanf("%d",&a[i]);
    sum = sum + a[i];
}
missing = 5050-sum;
printf("the missing number is %d\n",missing);

    return 0;
}