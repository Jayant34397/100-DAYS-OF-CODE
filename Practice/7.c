#include<stdio.h>
int main(){
int marks[10]={36,98,76,87,90,45,23,32,15,8};
for(int i=0;i<10;i++){
    if(marks[i]<35){
    printf("%d\n",i);
    }
}
    return 0;
}