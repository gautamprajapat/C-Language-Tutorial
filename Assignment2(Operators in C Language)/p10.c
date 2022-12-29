#include<stdio.h>

//Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)
int main()
{
    int num;
    printf("\nEnter a  number:");
    scanf("%d",&num);
    num=num/10;
    num=num*10;
    printf("\nNew number is %d",num);

    return 0;
}
