#include<stdio.h>
int main(){
int a[5]={2,54,78,100,50};
int largest = a[0];
for(int i = 1; i< 5;i++){
    if(largest< a[i]){
        largest = a[i];
    }
}
printf("the largest number is %d\n",largest);

    return 0;
} 