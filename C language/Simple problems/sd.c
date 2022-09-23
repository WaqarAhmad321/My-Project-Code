#include<stdio.h>
int printHW(int n);
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("%d",printHW(n));
    return 0;
}
int printHW(int n) {
    for(n == 0) {
        return;
    }
    printf("Hello World! \n");
    printHW(n-1);
}