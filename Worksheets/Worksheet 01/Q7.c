#include<stdio.h>
int main(){
    int length,breadth,area,perimeter;
    printf("enter length:");
    scanf("%d",&length);

    printf("enter breadth:");
    scanf("%d",&breadth);

    area = length*breadth;
    printf("the area of rectangle is:%d",length*breadth);

    perimeter = 2*(length + breadth);
    printf("The perimeter of rectangle is:%d",2*(length+breadth));

    return 0;

}