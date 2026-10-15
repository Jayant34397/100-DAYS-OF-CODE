#include<stdio.h>
int main(){
    int i=0;
    while(i<=1){
        i++;
        if(i==3)
        continue;

        printf("%d\n",i);
    }
    return 0;
}