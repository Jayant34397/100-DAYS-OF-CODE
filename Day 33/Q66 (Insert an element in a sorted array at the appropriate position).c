// Q66: Insert an element in a sorted array at the appropriate position.
/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int element;
    scanf("%d", &element);
    int i = n - 1;
    while(i >= 0 && arr[i] > element) {
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = element;
    n++;
    for(int j=0; j<n; j++) printf("%d%c", arr[j], j == n-1 ? '\n' : ' ');
    return 0;
}
