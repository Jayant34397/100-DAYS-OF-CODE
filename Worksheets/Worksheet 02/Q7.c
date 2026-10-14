# include<stdio.h>
int main(){
int side1,side2,side3;;

printf("enter sides1,side2,side3:");
scanf("%d %d %d",&side1,&side2,&side3); 

if(side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2){
    printf("the 3 numbers can form a triangle");
}
else{
    printf("the 3 numbers cannot form a triangle");
}
    return 0;
}