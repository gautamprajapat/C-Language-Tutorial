#include<stdio.h>
// Write a program to print size of an int, a float, a char and a double type variable
int main()
{
    int a=10;
    float b=3.5;
    char c='a';
    double d=4.90;
    printf("\nSize of int is %d",sizeof(a));
    printf("\nSize of float is %d",sizeof(b));
    printf("\nSize of char is %d",sizeof(c));
    printf("\nSize of double is %d",sizeof(d));

return 0;
}
