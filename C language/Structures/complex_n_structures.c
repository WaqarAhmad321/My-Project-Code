#include<stdio.h>

struct complex {
    int real;
    int img;
};
int main(){
    struct complex n = {2, 6};
    struct complex *ptr = &n;
    printf("The sum of complex numbers is : %d\n", ptr->real);
    printf("The imaginary part is : %d", ptr->img);
    return 0;
}