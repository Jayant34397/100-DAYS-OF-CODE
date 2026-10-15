/*inserting a element of a given array*/

#include<stdio.h>
int main(){
int a[5];
int pos;
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
a[6];
for(int i = pos - 1 ; i<5;i++){
    a[i+1] = a[i];
}
a[2]=16;

 return 0;
}