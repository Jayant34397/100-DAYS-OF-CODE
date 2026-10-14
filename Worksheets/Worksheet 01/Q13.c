#include<stdio.h>
int main(){
    int m1,m2,m3,total_marks,average_marks;
    printf("enter m1:");
    scanf("%d",&m1);

    printf("enter m2:");
    scanf("%d",&m2);

    printf("enter m3:");
    scanf("%d",&m3);

    total_marks = m1+m2+m3;
    printf("the total_marks is:%d",m1+m2+m3);

    average_marks = (m1+m2+m3)/3;
    printf("the average_marks is:%d",(m1+m2+m3)/3);
    
    return 0;
}