#include<stdio.h>

int main(){
    FILE *fptr1, *fptr2;
    fptr1 = fopen("read_and_print_twice_1.txt", "r");
    fptr2 = fopen("read_and_print_twice_2.txt", "w");
    char c;
    c = fgetc(fptr1);
    while (c != EOF) {
        fputc(c, fptr2);
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}