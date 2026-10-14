#include<stdio.h>
int main(){
    char name[50],city[50];
    int age;
    printf("enter name:");
    scanf("%s",&name);
    printf("enter city:");
    scanf("%s",&city);
    printf("enter age:");
    scanf("%d",&age);

    printf("name:%s",name);
    printf("city:%s",city);
    printf("age:%d",age);

    return 0;

}