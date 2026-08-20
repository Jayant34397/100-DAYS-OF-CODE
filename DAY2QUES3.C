/*write a program to calculate the area and perimeter of a rectangle given its length and breadth*/

#include<stdio.h>
int main(){
int length,breadth,area,perimeter;

printf("enter length:");
scanf("%d",&length);

printf("enter breadth:");
scanf("%d",&breadth);

 area = length * breadth;
 perimeter = 2 * (length + breadth);

printf("THE AREA OF THE RECTANGLE IS: %d\n", area);
printf("THE PERIMETER OF THE RECTANGLE IS:%d\n", perimeter);

    return 0;
}