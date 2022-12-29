#include<stdio.h>
//Write a program to check whether the given number is even or odd using a bitwise
//operator.


//
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if((n&1)==0)
        printf("Even");
    if((n&1)==1)
        printf("Odd");

    return 0;

}

