#include<stdio.h>
int main(){
int a[5]={2,54,78,100,50};
int smallest = a[0];
for(int i = 1; i< 5;i++){
    if(smallest > a[i]){
        smallest = a[i];
    }
}
printf("the smallest number is %d\n",smallest);

    return 0;
}